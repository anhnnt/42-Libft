/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:23:25 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/08 14:55:53 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <ctype.h>
*/
int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
/*
int	main()
{
	char	var1 = 'd';
	char	var2 = '\t';
	char	var3 = '8';

	printf ("%d\n", isdigit(var1));
	printf ("%d\n", ft_isdigit(var1));
	printf ("%d\n", isdigit(var2));
	printf ("%d\n", ft_isdigit(var2));
	printf ("%d\n", isdigit(var3));
	printf ("%d\n", ft_isdigit(var3));
}
*/