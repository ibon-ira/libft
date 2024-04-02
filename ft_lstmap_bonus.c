/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:32:39 by iboiraza          #+#    #+#             */
/*   Updated: 2024/04/01 17:23:08 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_map;
	t_list	*new_node;
	void	*map_content;

	if (!lst || !f || !del)
		return (NULL);
	list_map = NULL;
	while (lst)
	{
		map_content = f(lst->content);
		new_node = ft_lstnew(map_content);
		if (!new_node)
		{
			if (map_content)
				del(map_content);
			ft_lstclear(&list_map, del);
			return (NULL);
		}
		ft_lstadd_back(&list_map, new_node);
		lst = lst->next;
	}
	return (list_map);
}
