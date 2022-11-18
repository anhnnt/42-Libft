/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:49:11 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/11 16:34:08 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	print_list(t_list *list)
{
	while (list)
	{
		printf("%s\n", (char *) list->content);
		list = list->next;
	}
}
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (list)
	{
		list->content = content;
		list->next = NULL;
	}
	return (list);
}
/*
int main()
{
	t_list	*list;
	void	*content;

	content = "Bello";
	list = ft_lstnew((void *) content);
	print_list(list);
	return (0);
}
*/