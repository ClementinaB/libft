/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:34:28 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 18:05:08 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *) malloc(ft_strlen(s1) + 1);
	if (dest)
	{
		while (s1[i])
		{
			dest[i] = s1[i];
			i++;
		}
		dest[i] = '\0';
	}
	else
		return (NULL);
	return (dest);
}
/*
#include <string.h>
int	main(void)
{
	char	*str = "Hola";
	char	*str2;
	char	*str3;

	str2 = ft_strdup(str);
	str3 = strdup(str);
	printf("%s\n", str2);
	printf("%s\n", str3);
	free(str2);
	free(str3);
	return (0);
}*/
