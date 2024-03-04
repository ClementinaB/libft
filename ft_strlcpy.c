/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:59:50 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 19:29:53 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (dstsize != 0)
	{
		while ((src[i] != '\0') && (i < dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*
#include <string.h>
int main(void)
{
	char *src = "hola";
	char dst[50];
	size_t dstsize = 3;
	size_t	total_length = ft_strlcpy(dst, src, dstsize);
	size_t	total_length2 = strlcpy(dst, src, dstsize);
	printf("%zu\n", total_length);
	printf("%zu\n", total_length2);
	printf("%s\n", dst);
	return (0);
}*/
