/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:29:57 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 17:43:51 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	un_c;
	size_t			i;

	str = (unsigned char *)s;
	un_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == un_c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
 int	main(void)
{
	char	str[] = "Holaa";

	printf("%s\n", ft_memchr(str, 'l', 5));
	printf("%s\n", memchr(str, 'l', 5));
	return (0);
}*/
