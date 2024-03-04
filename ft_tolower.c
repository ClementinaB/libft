/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:42:03 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 19:56:15 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
#include <ctype.h>
int main(void)
{
	int c = 'A';
	char result = ft_tolower(c);
	char result2 = tolower(c);
	printf("%c\n", result);
	printf("%c\n", result2);
	return (0);
}
*/
