/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:36:56 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/20 14:25:37 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
void	my_upper(unsigned int i, char *c)
{
	*c = ft_toupper(*c);
}
int	main(void)
{
	char	str[] = "Hola";

	ft_striteri(str, my_upper);
	printf("%s\n", str);
	return (0);
}*/
