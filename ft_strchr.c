/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:53:03 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/18 15:03:53 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <string.h>
*/

char	*ft_strchr(const char *str, int c)
{
	char	*temp;
	char	character;

	temp = (char *)str;
	character = (char)c;
	while (1)
	{
		if (*temp == character)
			return (temp);
		if (*temp == 0)
			return (NULL);
		temp++;
	}
}
/*
int	main()
{
	char s[10] = "afb3300";
	char cha = 'b';

	printf("String after %c is %s\n", cha, strchr(s, cha));
	printf("String after %c is %s\n", cha, ft_strchr(s, cha));
}
*/
