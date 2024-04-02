/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:20:21 by iboiraza          #+#    #+#             */
/*   Updated: 2024/03/20 16:23:03 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*var;

	i = 0;
	var = b;
	while (i < len)
	{
		var[i] = c;
		i++;
	}
	return (b);
}
/*
int main(void)
{
	char	str[20];

	printf("String: %s\n", str);
	printf("My function: %s\n", ft_memset(str, 200, 10));
	printf("Original function: %s\n", memset(str, 200, 10));
	return (0);
}*/
