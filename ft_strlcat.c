/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:13:20 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/16 17:15:12 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	while (src[i] && (dst_len + i < dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main()
{
	// char	s1[15] = "@@make";
	// char	des1[7] = "BOOZ";
	// char	s2[15] = "@@make";
	// char	des2[7] = "BOOZ";

	// printf("%zu\n", strlcat(des1, s1, 7));
	// printf("%s\n", des1);
	// printf("%s\n", s1);
	// printf("-------\n");
	// printf("%zu\n", ft_strlcat(des2, s2, 7));
	// printf("%s\n", des2);
	// printf("%s\n", s2);
	char b[0xF] = "nyan !";

	printf("%zu\n", strlcat(((void *)0), b, 0));
	printf("%zu\n", ft_strlcat(((void *)0), b, 0));

	return (0);
	//return (src_len + dstsize);
}


int	main()
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	size_t r1 = strlcat(buff1, str, max);
	size_t r2 = ft_strlcat(buff2, str, max);

	printf("%zu\n", r1);
	printf("%zu\n", r2);
}
*/