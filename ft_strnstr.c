/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:22:56 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 19:47:20 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < n)
			{
				j++;
				if (needle[j] == '\0')
					return ((char *)&haystack[i]);
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
int main(void)
{
	char *haystack = "holaaa";
	char *needle = "a";
	size_t n = 3;
	char *result = ft_strnstr(haystack, needle, n);
	char *result2 = strnstr(haystack, needle, n);
	printf("%s\n", result);
	printf("%s\n", result2);
	return (0);
}*/
