/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:08:33 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/18 13:40:01 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	string_len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	string_len = ft_strlen(s);
	if (start >= string_len)
		return (ft_strdup(""));
	if (len > string_len)
		len = string_len;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/*
#include <stdio.h>
int	main()
{
	char *t;
	char *t1;

	t = ft_substr("0123456789", 9, 10);
	t1 = ft_substr("tripouille", 0, 42000);
	printf("%s\n", t);
	printf("%s\n", t1);
	return (0);
}
*/