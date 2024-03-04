/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:31:36 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 17:45:36 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((const unsigned char)str1[i] != (const unsigned char)str2[i])
			return ((const unsigned char)str1[i]
				- (const unsigned char)str2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
int	main(void)
{
	char	str[] = "Holaa";
	char	str2[] = "Holaa";

	printf("%d\n", ft_memcmp(str, str2, 5));
	printf("%d\n", memcmp(str, str2, 5));
	return (0);
}*/
