/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilegon-r <ilegon-r@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:23:45 by ilegon-r          #+#    #+#             */
/*   Updated: 2024/02/09 21:29:31 by ilegon-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *) malloc(sizeof(t_list));
	if (new_node)
	{
		new_node->content = content;
		new_node->next = NULL;
	}
	return (new_node);
}
/*
int	main(void)
{
	char	ptr[] = "holaa";

	printf("%s\n", ft_lstnew(ptr)->content);
	return (0);
}*/
