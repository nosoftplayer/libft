/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyolchy <miyolchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 23:48:57 by miyolchy          #+#    #+#             */
/*   Updated: 2025/01/28 01:32:41 by miyolchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_list)
{
	if (!*lst)
	{
		*lst = new_list;
		return ;
	}
	(ft_lstlast(*lst))->next = new_list;
}
/*
#include <stdio.h>

int main(void)
{
	t_list *first, *sec, *third, *fourth, *fifth, *sixth;
	
	first = ft_lstnew("1");
	sec = ft_lstnew("2");
	third = ft_lstnew("3");
	fourth = ft_lstnew("4");
	fifth = ft_lstnew("5");
	sixth = ft_lstnew("6");
	
	
	first->next = sec;
	sec->next = third;
	
	ft_lstadd_back(&first, fourth);
	ft_lstadd_back(&first, fifth);
	ft_lstadd_back(&first, sixth);
	
	printf("%d\n", ft_lstsize(first));

	free(first);
	free(sec);
	free(third);
	free(fourth);
	free(fifth);
	free(sixth);
	return (0);	
}*/