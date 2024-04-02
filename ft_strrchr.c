/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:01:09 by iboiraza          #+#    #+#             */
/*   Updated: 2024/03/20 17:04:00 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (i >= 0)
	{
		if (*s == (char) c)
			return ((char *)s);
		i--;
		s--;
	}
	return (NULL);
}
/*
//return (&s[f]);
int	main (void)
{
	char	*s1;
	int		c;

	s1 = "Buennos dias";
	c = 'n';
	printf ("My function: %s\n", ft_strrchr( s1, c));
	printf ("Original function: %s\n", strrchr( s1, c));
}*/
