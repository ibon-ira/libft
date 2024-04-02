/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:44:29 by iboiraza          #+#    #+#             */
/*   Updated: 2024/03/06 10:35:44 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(1 * sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node ->content = content;
	new_node ->next = NULL;
	return (new_node);
}
/*
#include <assert.h>
void	test_check_content()
{
	int	*value;
	t_list *node;
	value = malloc(sizeof(int));
	*value = 5;
	node = (ft_lstnew(value));
	assert(*(int *)(node->content) == 5);
	printf("Test de contenido pasado \n");
	free(value);
	free(node);
}
void	test_chec_newxr_null()
{
	int	*value;
	t_list *node;
	value = malloc(sizeof(int));
	*value = 5;
	node = (ft_lstnew(value));
	assert(node->next == NULL);
	printf("Test de netxt null pasado \n");
	free(value);
	free(node);
}
int main()
{
 	test_check_content();
 	test_chec_newxr_null();
 	return (0);
}*/
