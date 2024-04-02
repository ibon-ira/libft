/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:06:38 by iboiraza          #+#    #+#             */
/*   Updated: 2024/02/12 13:33:49 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	i = 0;
	s1 = (char *)src;
	s2 = (char *)dst;
	if (s2 == s1)
		return (dst);
	while (i < n)
	{
		*s2 = *s1;
		s1++;
		s2++;
		i++;
	}
	return (dst);
}
/*
//#include <stdio.h>
int main(void)
{
	char	*str;
	char	dst[50] = "Hola";
	size_t	n;

	n = 9;	
	str = "wergsethgwegsehgrhs";
	ft_memcpy(dst, str, 3);
	printf("Source string: %s\n", str);
	printf("Dest string with my function: %s\n", dst);
	printf("Dest string with original function: %s\n", memcpy(dst, str, 3));
	return (0);
}*/
