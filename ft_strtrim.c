/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:35:35 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/15 12:22:10 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*new_str;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while ((s1[end - 1]) && ft_strchr(set, s1[end - 1]) && end > start)
		end--;
	new_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (new_str)
	{
		i = 0;
		while (start < end)
			new_str[i++] = s1[start++];
		new_str[i] = '\0';
		return (new_str);
	}
	return (NULL);
}
/*int main(void)
{
	char *s1 = "hola";
	char *set = "h";
	char *new_str = ft_strtrim(s1, set);
	printf("%s\n", new_str);
	free(new_str);
	return (0);
}
*/
