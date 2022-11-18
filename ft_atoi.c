/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:22:08 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/08 15:49:37 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	is_minus;

	res = 0;
	i = 0;
	is_minus = 1;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	while ((str[i] == 45 || str[i] == 43) && str[i + 1] > 47 && str[i + 1] < 58)
	{
		if (str[i] == 45)
		{
			is_minus = -1;
			i++;
		}
		else
			i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * is_minus);
}
/*
int main()
{
	char str[50] = "abc-+88955 wd";
	int	i;

	i = ft_atoi(str);
	printf("%d", i);
	return (0);
}
*/