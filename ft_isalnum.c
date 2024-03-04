/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:42:12 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 16:55:53 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*int	main(void)
{
	char	c = 'D';

	if (ft_isalnum(c))
		printf("%c is alnum", c);
	else
		printf("%c is not alnum", c);
	return (0);
}*/
