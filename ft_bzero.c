/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:02:46 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/08 16:03:24 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while (n--)
	{
		*s = 0;
		s++;
	}
}
/*
int main()
{
    char str[30] = "Dynamic Memory Allocation";

    puts(str);
    ft_bzero(str, 3);
    puts(str);
    return (0);
}
*/

/*
ft_memset(str, 0, n);
*/