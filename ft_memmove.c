/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:43:58 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/08 14:25:53 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest1;
	const char	*s;

	dest1 = (char *)dest;
	s = (const char *)src;
	if (!dest && !s)
		return (NULL);
	if (dest1 <= s)
		ft_memcpy(dest1, s, n);
	else
	{
		while (n--)
			*(dest1 + n) = *(s + n);
	}
	return (dest);
}
/*
int main()
{
	char str[30] = "Learningisfun";
	char *first;
	first = str;
	printf("Original string :%s\n ", str);

	// when overlap it start from first position
	ft_memmove(first + 8, first, 11);
	printf("memmove overlap : %s\n ", str);

	return (0);
}
*/
