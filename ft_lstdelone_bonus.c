/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:13:59 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/15 11:43:54 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del (lst->content);
		free (lst);
	}
}
/*int	main (void)
{
	t_list	*lst;

	lst = ft_lstnew("hola");
	ft_lstdelone(lst, free);
	if (!lst)
		printf("Node deleted\n");
	else
		printf("Not deleted\n");
	return (0);
}*/
