/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:17:45 by iboiraza          #+#    #+#             */
/*   Updated: 2024/03/06 10:14:39 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (dstsize == 0)
		return (j);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/*
int	main(void)
{
	char	*s1;
	char	s2[100] = "Hey,";
	char    s3[100] = "Hei,";

	s1 = "hola perri";
	printf("Before copy: \n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s3: %s\n", s3);
	printf("After copy: \n");
	ft_strlcpy(s2, s1, 30);
	strlcpy(s2, s1, 30);
	printf("After my function(s2): %s\n", s2);
	printf("After original function(s2): %s\n", s2);
	ft_strlcpy(s3, s1, 30);
	strlcpy(s3, s1, 30);
	printf("After my function(s3): %s\n", s3);
	printf("After original function(s3): %s\n", s3);
}*/
