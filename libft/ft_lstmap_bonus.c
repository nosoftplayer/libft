/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyolchy <miyolchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 02:35:15 by miyolchy          #+#    #+#             */
/*   Updated: 2025/01/28 20:16:52 by miyolchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new_lists;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_lists = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&new_lists, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lists, node);
		lst = lst->next;
	}
	return (new_lists);
}

/*
#include <stdio.h>

void	*print_content(void *content)
{
	if (content)
		return (ft_strdup((char *)content));
	return (NULL);
}

void	delete_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*f, *s, *t, *q, *new_list;

	f = ft_lstnew(ft_strdup("1"));
	s = ft_lstnew(ft_strdup("2"));
	t = ft_lstnew(ft_strdup("3"));
	q = ft_lstnew(ft_strdup("4"));

	if (!f || !s || !t || !q)
	{
		ft_lstclear(&f, delete_content);
		return (1);
	}

	f->next = s;
	s->next = t;
	t->next = q;
	q->next = NULL;

	// Вызываем ft_lstmap
	new_list = ft_lstmap(f, print_content, delete_content);

	// Вывод нового списка
	t_list *current = new_list;
	while (current)
	{
		printf("New Content: %s\n", (char *)current->content);
		current = current->next;
	}

	// Очищаем списки
	ft_lstclear(&f, delete_content);
	ft_lstclear(&new_list, delete_content);

	return (0);
}*/