/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:03:30 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 19:31:21 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <string.h> 
int main(void)
{
	char *str = "hola";
	size_t length = ft_strlen(str);
	size_t length2 = strlen(str);
	printf("%zu\n", length);
	printf("%zu\n", length2);
	return (0);
}*/
