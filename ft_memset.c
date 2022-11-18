/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:53:32 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/08 14:26:18 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
*/

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;

	s = str;
	while (n--)
	{
		*s = c;
		s++;
	}
	return (str);
}
/*
int main()
{
	char str[30] = "Dynamic Memory Allocation";

	printf("%s\n", str);
	printf("%s\n", ft_memset(str, 'h', 5));
	printf("%zu\n", ft_strlen(str));
	return (0);
}
*/
