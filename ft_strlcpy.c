/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:55:09 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/09 16:40:02 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main()
{
	char	s1[50] = "dbc123";
	char	des1[50] = "a12";
	char	s2[50] = "dbc123";
	char	des2[50] = "a12";

	printf("%zu\n", strlcpy(des1, s1, 2));
	printf("%s\n", des1);
	printf("%lu\n", sizeof(des1));
	printf("-------\n");
	printf("%zu\n", ft_strlcpy(des2, s2, 2));
	printf("%s\n", des2);
	printf("%lu\n", sizeof(des2));

	char dst[2] = "ho";
	char src[50] = "Hel";
	printf("%zu\n", strlcpy(dst, src, 3));
	printf("%s\n", dst);
	printf("%lu\n", strlen(dst));
	size_t i = ft_strlcpy(((void *)0), ((void *)0), 10);
	return (0);
}
*/
