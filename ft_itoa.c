/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:00:41 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 17:06:18 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	long	n;
	int		i;

	n = nb;
	i = len (n);
	str = (char *) malloc(i + 1);
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}
/*int	main(void)
{
	int		n = 253262;
	char	*str;
	
	str = ft_itoa(n);
	if (str == NULL)
		printf("Memory allocation failed\n");
	else
		printf("Number: %d\n", n);
		printf("String: %s\n", str);
		free(str);
	return (0);
}*/
