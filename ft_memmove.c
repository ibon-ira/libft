/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:22:13 by iboiraza          #+#    #+#             */
/*   Updated: 2024/03/12 16:48:26 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char *)src;
	s2 = (char *)dst;
	i = 0;
	if (s2 == s1)
		return (dst);
	if (dst > src)
	{
		while (len--)
			s2[len] = s1[len];
	}
	else
	{
		while (i < len)
		{
			*s2 = *s1;
			s1++;
			s2++;
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	*s1;
	char	s2[17] = "dias";

	s1 = "Hola buenos dias";
	printf("Before function: \n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("After function: \n");
	ft_memmove(s2, s1, 17);
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
}*/
