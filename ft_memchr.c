/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:12:16 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/16 18:23:09 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
*/

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*res;

	res = (unsigned char *)str;
	while (n--)
	{
		if (*res == (unsigned char)c)
			return (res);
		res++;
	}
	return (NULL);
}
/*
int main(void)
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = '.';
    char *ret;

    ret = ft_memchr(str, ch, strlen(str));

    printf("String after |%c| is - |%s|\n", ch, ret);

    return (0);
}

#include <stdio.h>
int	main()
{
	char s[] = {0, 1, 2, 3, 4, 5};
	char *ret;
	char *ori_ret;

	ori_ret = memchr(s, 2 + 256, 3);
	ret = ft_memchr(s, 2 + 256, 3);
	printf("String: %s\n", ret);
	printf("Ori String: %s\n", ori_ret);
	return (0);
}
*/