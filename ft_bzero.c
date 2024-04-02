/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:59:30 by iboiraza          #+#    #+#             */
/*   Updated: 2024/02/26 18:15:59 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	str[15] = "Hola";
	
	printf("The string: %s\n", str);
	ft_bzero(str, 10);
	printf("After my function: %s\n", str);
//	printf("%c", 'r');
	return (0);
}*/
