/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:45:06 by iboiraza          #+#    #+#             */
/*   Updated: 2024/02/20 18:19:07 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (!needle[i])
		return ((char *) &haystack[i]);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (!needle[++j])
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main (void)
{
	char	*s1;
	char	*s2;
	int		c;

	s1 = "Buenos dias";
	s2 = "dia";
	printf ("My function: %s\n", ft_strnstr( s1, s2, 10));
	printf ("Original function: %s\n", strnstr( s1, s2, 10));
}*/
