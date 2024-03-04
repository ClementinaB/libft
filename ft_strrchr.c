/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:32:47 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 19:49:11 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = (char)c;
	i = ft_strlen(s);
	if (a == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == a)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <string.h>
int main(void)
{
	char *s = "hola";
	int c = 'a';
	char *p = ft_strrchr(s, c);
	char *p2 = strrchr(s, c);
	printf("%s\n", p);
	printf("%s\n", p2);
	return (0);
}*/
