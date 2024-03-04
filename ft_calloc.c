/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:41:35 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 16:56:28 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t c, size_t s)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = malloc(c * s);
	if (!ptr)
		return (NULL);
	while (i < c * s)
		ptr[i++] = 0;
	return (ptr);
}
/*int	main(void)
{
	char	*str = ft_calloc(56, sizeof(char));
	int		success = 1;
	size_t	i = 0;

	if (str)
	{
		while (i < 56)
		{
			if (str[i] != 0)
				success = 0;
			i++;
		}
		if (success)
			printf("Calloc worked \n");
		else
			printf("Calloc failed \n");
		free (str);
	return (0);
}
*/
