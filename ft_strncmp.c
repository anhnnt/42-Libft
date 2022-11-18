/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:01:51 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/09 13:23:38 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <string.h>
*/

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (n--)
	{
		if (s1[i] != s2[i] || s1[i] == 0 || s2[i] == 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char str1[15];
	char str2[15];
	int ret;
	int ft_ret;

	strcpy(str1, "omg1||||");
	strcpy(str2, "omg3");

	ft_ret = ft_strncmp(str1, str2, 4);
	ret = strncmp(str1, str2, 4);
	if (ft_ret < 0)
	{
		printf("str1 is less than str2\n");
	}
	else if (ft_ret > 0)
	{
		printf("str2 is less than str1\n");
	}
	else
	{
		printf("str1 is equal to str2\n");
	}

		if (ret < 0)
	{
		printf("ORI: str1 is less than str2\n");
	}
	else if (ret > 0)
	{
		printf("ORI: str2 is less than str1\n");
	}
	else
	{
		printf("ORI: str1 is equal to str2\n");
	}

	return (0);
}


	// while (--n && *str1 == *str2)
	// {
	// 	str1++;
	// 	str2++;
	// }
	// return (*str1 - *str2);

*/
