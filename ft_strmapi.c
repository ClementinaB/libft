/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:04:33 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/20 14:25:55 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	new_str = malloc((ft_strlen(s) + 1) * sizeof(char));
	i = 0;
	if (!s)
		return (NULL);
	if (!new_str)
		return (NULL);
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*char	my_upper(unsigned int i, char c)
{
	return (ft_toupper(c));
}
int main(void)
{
	char *s = "hola";
	char *new_str = ft_strmapi(s, my_upper);
	printf("%s\n", new_str);
	free(new_str);
	return (0);
}*/
