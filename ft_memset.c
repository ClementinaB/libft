/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:13:58 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 17:58:06 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)b;
	while (n > 0)
	{
		*temp++ = (unsigned char) c;
		n--;
	}
	return (b);
}
/*
#include <string.h>>
int	main(void)
{
	char	str[] = "Hola";
	
	printf("%s\n", ft_memset(str, 'a', 3));
	printf("%s\n", memset(str, 'a', 3));
	return (0);
}
*/
