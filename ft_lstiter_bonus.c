/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:17:15 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/20 14:50:11 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f (lst->content);
		lst = lst->next;
	}
}
/*int	main(void)
{
	 t_list	*lst;
	 t_list	*new;

	 lst = ft_lstnew("h");
	 new = ft_lstnew("p");
	 ft_lstadd_back(&lst, new);
	 ft_lstiter(lst, (void(*)(void*))ft_toupper);
	 printf("%s\n", lst->content);
	 printf("%s\n", lst->next->content);
	 return (0);
}*/
