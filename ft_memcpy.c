/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:09:09 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 17:50:13 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	while (n > 0)
	{
		*(temp_dst++) = *(temp_src++);
		n--;
	}
	return (dst);
}
/*
#include <string.h>
int	main(void)
{
	char	str[] = "Hola";
	char	str2[20] = "";

	printf("%s\n", ft_memcpy(str2, str, 3));
	printf("%s\n", memcpy(str2, str, 3));
	return (0);
	}*/
