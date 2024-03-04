/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:40:49 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/15 11:12:12 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n > 0)
	{
		*ptr++ = 0;
		n--;
	}
}
/*int	main (void)
{
 	char	*str = malloc(56);
 	int		success = 1;
 	size_t	i = 0;

 	ft_bzero(str, 56);
 	while (i < 56)
 	{
 		if (str[i] != 0)
			success = 0;
		i++;
	}
	if (success)
		printf("Bzero worked\n");
	else
		printf("Bzero failed\n");
	free(str);
	return (0);
 }*/
