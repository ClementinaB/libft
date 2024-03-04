/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:28:46 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/15 12:00:25 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*int	main(void)
{
	t_list	*lst;
	t_list	*lst2;
	t_list	*lst3;

	lst = ft_lstnew("one");
	lst2 = ft_lstnew("two");
	lst3 = ft_lstnew("three");
	ft_lstadd_back(&lst, lst2);
	ft_lstadd_back(&lst, lst3);
	printf("%d\n", ft_lstsize(lst));
	return (0);
}*/
