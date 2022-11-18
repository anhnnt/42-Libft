/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:35:44 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/18 13:13:57 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	up_char(unsigned int num, char c)
{
	return (c + num*2);
}


int	main()
{
	char s[20] = "Hello";
	char *test;
	int	i;

	i = 0;
	test = ft_strmapi(s, up_char);
	printf("Orginal string s is: %s\n", s);

	while (test[i] != '\0')
	{
		printf("%c\n",test[i]);
		i++;
	}
	return (0);
}
*/