/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:24:24 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/18 15:39:40 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void del(void *content)
{
	char *str;

	str = (char *)content;
	ft_bzero(str, ft_strlen(str));
}

int main()
{
	t_list *list;
	char *str;

	str = "Bello";
	list = ft_lstnew((void *)str);
	printf("%s\n", (char *)list->content);
	ft_lstdelone(list, del);
	printf("%s\n", (char *)list->content);
	return (0);
}
*/