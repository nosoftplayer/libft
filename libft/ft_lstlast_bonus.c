/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyolchy <miyolchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 23:40:11 by miyolchy          #+#    #+#             */
/*   Updated: 2025/01/27 23:47:47 by miyolchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next != NULL)
			lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>

int main(void)
{
	t_list *f, *s, *t, *q;
	f = ft_lstnew("1");
	s = ft_lstnew("2");
	t = ft_lstnew("3");
	q = ft_lstnew("4");
	
	f->next = s;
	s->next = t;
	t->next = q;
	q->next = NULL;

	printf("Last list content = %s", (char *)ft_lstlast(f)->content);
	
	free(f);
	free(s);
	free(t);
	free(q);

	return (0);
}
*/