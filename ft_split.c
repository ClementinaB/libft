/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:21:28 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 16:41:19 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(char const *s, char c)
{
	size_t	cnt;

	if (!*s)
		return (0);
	cnt = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			cnt++;
		while (*s != c && *s)
			s++;
	}
	return (cnt);
}

static char	**free_mem(char **lst)
{
	int	i;

	i = 0;
	while (lst[i])
		free(lst[i++]);
	free(lst);
	return (NULL);
}

static char	*get_word(char const *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = ft_substr(s, 0, len);
	if (!word)
		return (NULL);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	lst = (char **)malloc(sizeof(char *) * (count(s, c) + 1));
	if (!s || !lst)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			lst[j] = get_word(s + i, c);
			if (!lst[j++])
				return (free_mem(lst));
		}
		while (s[i] != c && s[i])
			i++;
	}
	lst[j] = NULL;
	return (lst);
}
/*int main(void)
{	const char	str[] = "//hola //q/u//e/tal//?//";
	char		c = '/';
	char	**res = ft_split(str, c);

	if (res)
	{
		int	i = 0;
		while (res[i] != NULL)
		{
			printf("%s\n", res[i]);
			free (res[i]);
			i++;
		}
		free (res);
	}
	else
		printf("Memory allocation failed\n");
	return (0);
}*/
