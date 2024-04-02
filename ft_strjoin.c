/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:40:22 by iboiraza          #+#    #+#             */
/*   Updated: 2024/02/26 18:13:48 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, i + j + 1);
	ft_strlcat(str, s2, i + j + 1);
	return (str);
}
/*
int	main (void)
{
	char	*s1;
	char	*s2;

	s1 = "Hola";
	s2 = ", buenas tardes";
	printf("%s\n", ft_strjoin(s1, s2));
	return(0);
}*/
