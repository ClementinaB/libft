/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:12:38 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/15 11:38:44 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	*lst = NULL;
}
/*int	main (void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*new2;
	t_list	*new3;

	lst = ft_lstnew("one");
	new = ft_lstnew("two");
	new2 = ft_lstnew("three");
	new3 = ft_lstnew("four");
	ft_lstadd_back(&lst, new);
	ft_lstadd_back(&lst, new2);
	ft_lstadd_back(&lst, new3);
	printf("%s\n", lst->content);
	printf("%s\n", ft_lstlast(lst)->content);
	ft_lstclear(&lst, free);
	if (lst == NULL)
		printf("la lista está vacía\n");
	return (0);*/
