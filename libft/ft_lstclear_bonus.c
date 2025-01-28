/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyolchy <miyolchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 01:35:40 by miyolchy          #+#    #+#             */
/*   Updated: 2025/01/28 02:03:40 by miyolchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

/*
#include <stdio.h>

void del(void *content)
{
	if (content)
		free(content);
}

int main(void)
{
	t_list	*lst, *elem1, *elem2, *elem3;

	elem1 = ft_lstnew(malloc(10));
	elem2 = ft_lstnew(malloc(10));
	elem3 = ft_lstnew(malloc(10));

	if (!elem1 || !elem2 || !elem3)
		return (1);

	ft_strlcpy(elem1->content, "Elem1", ft_strlen("Elem1") + 1);
	ft_strlcpy(elem2->content, "Elem2", ft_strlen("Elem2") + 1);
	ft_strlcpy(elem3->content, "Elem3", ft_strlen("Elem3") + 1);

	printf("%s\n", (char *)elem1->content);
	printf("%s\n", (char *)elem2->content);
	printf("%s\n", (char *)elem3->content);

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;
	lst = elem1;

	ft_lstclear(&lst, del);

	if (!lst)
		printf("List cleared successfully!\n");
	else
		printf("List not cleared.\n");

	return (0);	
}*/