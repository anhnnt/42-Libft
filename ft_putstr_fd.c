/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:20:58 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/18 13:07:15 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	leng;

	if (!s)
		return ;
	leng = ft_strlen(s);
	write (fd, s, leng);
}
/*
int	main()
{
	ft_putstr_fd("hello", 1);
	return (0);
}
*/