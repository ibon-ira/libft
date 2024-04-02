/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:08:28 by iboiraza          #+#    #+#             */
/*   Updated: 2024/02/28 12:47:06 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *) malloc(count * size);
	while (str && (i < count * size))
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
/*
int	main (void)
{
	size_t	i;
	size_t	j;

	i = 3;
	j = 4;
	printf("My function: %s\n", ft_calloc (i, j));
	printf("Original function: %s\n", calloc (i, j));
}*/
