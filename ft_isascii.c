/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:34:50 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/08 14:20:50 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <ctype.h>
*/

int	ft_isascii(int c)
{
	if (c >= 0 & c <= 127)
		return (1);
	return (0);
}
/*
int main()
{
    char var1 = 'd';
    char var2 = '\\t';
    char var3 = '8';

	printf("%d\n", isascii(var1));
	printf("%d\n", ft_isascii(var1));
	printf("%d\n", isascii(var2));
	printf("%d\n", ft_isascii(var2));
	printf("%d\n", isascii(var3));
	printf("%d\n", ft_isascii(var3));
    return (0);
}
*/