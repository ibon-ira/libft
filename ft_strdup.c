/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:10:18 by iboiraza          #+#    #+#             */
/*   Updated: 2024/02/28 11:56:14 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	str = (char *)malloc (sizeof (char) * (i + 1));
	if (str)
	{
		while (j < i)
		{
			str[j] = s1[j];
			j++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
/*
int	main (void)
{
	char	*s1;

	s1 = "Hola";
	printf("My function: %s\n", ft_strdup (s1));
	printf("Original function: %s\n", strdup (s1));
}*/
