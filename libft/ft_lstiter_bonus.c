/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyolchy <miyolchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 02:06:34 by miyolchy          #+#    #+#             */
/*   Updated: 2025/01/28 02:25:41 by miyolchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>

void f(void *content)
{
	printf("%s\n", (char *)content);
}

int main(void)
{
	t_list *e1, *e2, *e3;
	e1 = ft_lstnew("1");
	e2 = ft_lstnew("2");
	e3 = ft_lstnew("3");
	
	e1->next = e2;
	e2->next = e3;
	e3->next = NULL;

	ft_lstiter(e1, f);

	return (0);
}*/