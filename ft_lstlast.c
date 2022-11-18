/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:23:39 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/18 15:40:09 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
	t_list *list;
	t_list *list1;
	t_list *list2;
	t_list *list3;
	t_list *list4;
	t_list *res;
	char *str;

	str = "Bello";
	list->next = list1;
	list1->next = list2;
	list2->next = list3;
	list3->next = list4;
	list4->next = NULL;
	list4->content = (void *)str;
	res = ft_lstlast(list);
	printf("%s", (char *)res->content);
}
*/