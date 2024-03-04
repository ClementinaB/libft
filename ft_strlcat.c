/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:46:34 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 19:23:06 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	destlen;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
		j++;
	destlen = j;
	srclen = ft_strlen(src);
	if (dstsize == 0 || dstsize <= destlen)
		return (srclen + dstsize);
	while (src[i] != '\0' && i < dstsize - destlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (destlen + srclen);
}
/*
#include <string.h>
int main(void)
{
	char *src = "hola";
	char *dst = "adios";
	size_t dstsize = 3;
	size_t	total_length = ft_strlcat(dst, src, dstsize);
	size_t	total_length2 = strlcat(dst, src, dstsize);
	printf("%zu\n", total_length);
	printf("%zu\n", total_length2);
	printf("%s\n", dst);
	return (0);
}*/
