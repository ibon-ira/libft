/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:33:32 by iboiraza          #+#    #+#             */
/*   Updated: 2024/02/20 18:09:44 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || i == n - 1)
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*
int	main (void)
{
	char	*s1;
	char    *s2;
	int		c;

	s1 = "Buenos dias";
	s2 = "Buenos dias";
	c = 10;
	printf ("My function: %d\n", ft_strncmp( s1, s2, c));
	printf ("Original function: %d\n", strncmp( s1, s2, c));
}*/
