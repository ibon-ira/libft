/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:24:44 by iboiraza          #+#    #+#             */
/*   Updated: 2024/03/04 11:42:17 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize < dst_len + 1)
		return (dstsize + src_len);
	if (dstsize > dst_len + 1)
	{
		while (dst_len + 1 + i < dstsize && src[i] != '\0')
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char	*s1;
	char	s2[100] = "Hey,";
	char    s3[100] = "Hei, ";

	s1 = " buenos dias";
	printf("Before copy: \n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s3: %s\n", s3);
	ft_strlcat(s2, s1, 19);
	ft_strlcat(s3, s1, 19);
	strlcat(s2, s1, 19);
	strlcat(s3, s1, 19);
	printf("After my function(s2): %s\n", s2);
	printf("After my function(s3): %s\n", s3);
	printf("After original function(s2): %s\n", s2);
	printf("After original function(s3): %s\n", s3);
}*/
