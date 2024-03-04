/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:39:40 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/13 11:33:08 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	input_length;

	if (!s)
		return (NULL);
	input_length = ft_strlen(s);
	if (start >= input_length || len == 0)
		return (ft_calloc(1, 1));
	if (input_length - start < len)
		str = ft_calloc(input_length - start + 1, sizeof(char));
	else
		str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (input_length - start < len)
		len = input_length - start;
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/*int	main(void)
{
	unsigned int	n = 2;
	size_t			len = 30;
	char *			resultado;

	resultado = ft_substr("hola", n, len);

	printf("%s\n", resultado);
	return (0);
}*/
