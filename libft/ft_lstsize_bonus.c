/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyolchy <miyolchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 23:14:01 by miyolchy          #+#    #+#             */
/*   Updated: 2025/01/28 01:25:22 by miyolchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		++size;
	}
	return (size);
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

	// ft_lstsize(NULL); size == 0;
	// f->next = NULL;  size == 1;
	f->next = s;
	s->next = t;
	t->next = q;
	q->next = NULL;
	
	printf("%d\n", ft_lstsize(f));
	// printf("%d\n", ft_lstsize(NULL));

	free(f);
	free(s);
	free(t);
	free(q);
	
	return (0);
}
*/