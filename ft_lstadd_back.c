/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:14:46 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/18 15:39:11 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}
/*
void	print_list(t_list *list)
{
	while (list)
	{
		printf("%s\n", (char *) list->content);
		list = list->next;
	}
}
int	main()
{
	t_list	*list;
	t_list	*list1;
	void	*content;
	void	*content1;

	list = ft_lstnew((void *) content);
	list1 = ft_lstnew((void *) content1);
	ft_lstadd_back(&list, list1);
	print_list(list);
	return (0);
}

int main()
{
	t_list *list;
	t_list *list1;
	t_list *list2;
	t_list *list3;
	t_list *list4;
	t_list *last;
	t_list *temp;
	char *str;

	str = "Bello";
	list->next = list1;
	list1->next = list2;
	list2->next = list3;
	list3->next = list4;
	list4->next = NULL;
	last = ft_lstnew((void *)str);
	ft_lstadd_back(&list, last);
	temp = ft_lstlast(list);
	printf("%s", (char *)temp->content);
}
*/