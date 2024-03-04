/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:32:15 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 18:03:42 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	a;

	a = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == a)
			return ((char *)&s[i]);
		i++;
	}
	if (a == '\0')
		return ((char *)&s[i]);
	else
		return (NULL);
}
/*
#include <string.h>
int	main(void)
{
	char	str[] = "Hola";
	char	c = 'a';

	printf("%s\n", ft_strchr(str, c));
	printf("%s\n", strchr(str, c));
	return (0);
}*/
