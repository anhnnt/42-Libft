/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:41:52 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/08 14:21:10 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <ctype.h>
*/

int	ft_isprint(int c)
{
	if (c >= 32 & c <= 126)
		return (1);
	return (0);
}
/*
int main()
{
	char var1 = 'd';
	char var2 = '\t';
	char var3 = '8';

	printf("%d\n", isprint(var1));
	printf("%d\n", ft_isprint(var1));
	printf("%d\n", isprint(var2));
	printf("%d\n", ft_isprint(var2));
	printf("%d\n", isprint(var3));
	printf("%d\n", ft_isprint(var3));
    return (0);
}
*/