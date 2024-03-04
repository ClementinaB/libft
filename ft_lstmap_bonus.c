/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:19:45 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/20 15:03:26 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_list;
	void	*tmp;

	if (!lst || (!f || !del))
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		new = ft_lstnew(tmp);
		if (!new)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new);
		lst = lst->next;
	}
	return (new_list);
}
#include <ctype.h>
void	my_upper(int *c)
{
	*(char *)c = toupper(*(char *)c);
}
int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*new2;
	t_list	*new_list;

	lst = ft_lstnew("h");
	new = ft_lstnew("b");
	new2 = ft_lstnew("o");
	ft_lstadd_back(&lst, new);
	ft_lstadd_back(&lst, new2);
	new_list = ft_lstmap(lst, my_upper, free);
	if (!new_list)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%s\n", new_list->content);
		printf("%s\n", new_list->next->content);
		printf("%s\n", new_list->next->next->content);
		ft_lstclear(&new_list, free);
	return (0);
}
