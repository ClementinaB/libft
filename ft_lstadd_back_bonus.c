/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:09:07 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/17 17:08:42 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
/*int	main(void)
{
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew("one");
	new = ft_lstnew("two");
	ft_lstadd_back(&lst, new);
	printf("%s\n", ft_lstlast(lst)->content);
}*/
