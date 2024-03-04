/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:42:49 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 19:55:52 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*int main(void)
{
	int c = 'j';
	char result = ft_toupper(c);
	char result2 = toupper(c);
	printf("%c\n", result);
	printf("%c\n", result2);
	return (0);
}
*/
