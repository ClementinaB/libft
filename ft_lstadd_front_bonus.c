/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:11:28 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 17:10:57 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*int	main(void)
{
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew("adios");
	new = ft_lstnew("hola");
	ft_lstadd_front(&lst, new);
	printf("%s\n", lst->content);
	printf("%s\n", lst->next->content);
	return (0);
}*/
