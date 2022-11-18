/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:11:55 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/08 15:06:43 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <ctype.h>
*/
int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
/*
int	main()
{
	char	var1 = 'd';
	char	var2 = '\t';
	char	var3 = '8';

	printf ("%d\n", isalpha(var1));
	printf ("%d\n", ft_isalpha(var1));
	printf ("%d\n", isalpha(var2));
	printf ("%d\n", ft_isalpha(var2));
	printf ("%d\n", isalpha(var3));
	printf ("%d\n", ft_isalpha(var3));
}
*/
