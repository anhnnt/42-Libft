/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:22:34 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/18 15:40:24 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int main()
{
	t_list *list;
	t_list *list1;
	void *content;
	void *content1;
	int size;

	size = 0;
	content = "Bello";
	content1 = 123;
	list = ft_lstnew((void *)content);
	list1 = ft_lstnew((void *)content1);
	ft_lstadd_front(&list, list1);
	size = ft_lstsize(list);
	printf("%d", size);
	return (0);
}
*/