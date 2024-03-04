/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:11:13 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 17:53:02 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*ptr_dst;
	char	*ptr_src;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	ptr_dst = (char *)dst;
	ptr_src = (char *)src;
	i = 0;
	if (ptr_dst > ptr_src)
		while (n-- > 0)
			ptr_dst[n] = ptr_src[n];
	else
	{
		while (i < n)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <string.h>
int	main(void)
{
	char	str[] = "Hola";
	char	str2[30];

	printf("%s\n", ft_memmove(str2, str, 3));
	printf("%s\n", memmove(str2, str, 3));
	return (0);
}*/
