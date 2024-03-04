/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:07:31 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 19:44:16 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	else
		return (str1[i] - str2[i]);
}
/*
#include <string.h>
int main(void)
{
	char *s1 = "hola";
	char *s2 = "hola";
	size_t n = 3;
	int result = ft_strncmp(s1, s2, n);
	int result2 = strncmp(s1, s2, n);
	printf("%d\n", result);
	printf("%d\n", result2);
	return (0);
}
*/
