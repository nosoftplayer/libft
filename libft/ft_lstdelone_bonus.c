/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyolchy <miyolchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 00:51:41 by miyolchy          #+#    #+#             */
/*   Updated: 2025/01/28 01:58:44 by miyolchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void del(void *content)
{
	if (content)
		free(content);
}
#include <stdio.h>

void del(void *content)
{
	if (content)
		free(content);
}

int main(void)
{
	t_list *lst;

	lst = ft_lstnew(malloc(8));
	if (!lst || !lst->content)
		return (1);
	ft_strlcpy(lst->content, "Content", ft_strlen("Content") + 1);
	printf("%s\n", (char *)lst->content);
	
	ft_lstdelone(lst, del);
	lst = NULL;
	
	if (!lst)
    	printf("Node is deleted and pointer is NULL.\n");
	else
    	printf("Node is not deleted.\n");
	
}*/