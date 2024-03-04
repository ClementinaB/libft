/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:43:28 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 17:01:52 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*int	main(void)
{
	char	c = 'D';

	if (ft_isascii(c))
		printf("%c is ascii", c);
	else
		printf("%c is not ascii", c);
	return (0);
}*/
