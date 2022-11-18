/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:18:28 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/16 18:27:41 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (n == 0)
		return (0);
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (--n && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int main()
{
char str1[15];
char str2[15];
int ret;
int	ft_ret;

memcpy(str1, "a\0cdef", 6);
memcpy(str2, "abcdeF", 6);

ret = memcmp(str1, str2, 5);
ft_ret = ft_memcmp(str1, str2, 5);

if (ret > 0)
{
	printf("str2 is less than str1\n");
}
else if (ret < 0)
{
	printf("str1 is less than str2\n");
}
else
{
	printf("str1 is equal to str2\n");
}

if (ft_ret > 0)
{
	printf("str2 is less than str1\n");
}
else if (ft_ret < 0)
{
	printf("str1 is less than str2\n");
}
else
{
	printf("str1 is equal to str2\n");
}

return (0);
}
*/