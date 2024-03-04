/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:38:29 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 19:20:21 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*str;

	str = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	ptr = str;
	if (s1 && s2 && str)
	{
		while (*s1)
			*ptr++ = *s1++;
		while (*s2)
			*ptr++ = *s2++;
		*ptr = '\0';
		return (str);
	}
	return (NULL);
}
/*int	main(void)
{
	char	*str = "Hola";
	char	*str2 = " Mundo";
	char	*str3[];

	str3 = ft_strjoin(str, str2);
	printf("%s\n", str3);
	free(str3);
	return (0);
}*/
