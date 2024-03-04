/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:18:26 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 17:37:20 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}
/*int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*new2;

	lst = ft_lstnew("one");
	new = ft_lstnew("two");
	new2 = ft_lstnew("three");
	lst->next = new;
	new->next = new2;
	printf("%s\n", ft_lstlast(lst)->content);
	return (0);
}*/
