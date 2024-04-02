/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:22:43 by iboiraza          #+#    #+#             */
/*   Updated: 2024/02/28 12:09:06 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	l;

	i = 0;
	l = ft_strlen(s);
	while (i <= l)
	{
		if (s[i] == (char) c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
/*
int	main (void)
{
	char	*s1;
	int		c;

	s1 = "Buenos dias";
	c = 'n';
	printf ("My function: %s\n", ft_strchr( s1, c));
	printf ("Original function: %s\n", strchr( s1, c));
}*/
