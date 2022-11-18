/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:06:56 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/18 15:15:26 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
char* ft_strnstr(const char* big, const char* little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *) big);
	if (len == 0)
		return (NULL);
	while (big[i] != '\0' && i < len)
	{
    	j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (!*needle)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && (len - needle_len) >= 0)
	{
		if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0 && len == needle_len)
			return ((char *)(haystack));
		haystack++;
		len--;
	}
	return (NULL);
}
*/

/*
#include <stdio.h>
int	main()
{
	char *haystack;
	char	*res;
	int	i;

	haystack = "aaabcabcd";
	res = ft_strnstr(haystack, "cd", 8);
	//i = ft_strncmp(res, haystack + 5, 9);
	printf("%s", res);
}

int	main()
{
	// char str[30] = "The code school la";
	// char find[10] = "schoo";
	// char *ptr;
	// char *ft_ptr;

	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	size_t max = strlen(s2);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);

	// ptr = strnstr(str, find, 30);
	// ft_ptr = ft_strnstr(str, find, 20);

	printf("%s\n", i1);
	printf("%s\n", i2);
	return (0);
}
*/