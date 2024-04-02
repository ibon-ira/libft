/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:57:07 by iboiraza          #+#    #+#             */
/*   Updated: 2024/02/28 13:05:17 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*memory;

	i = 0;
	memory = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!memory)
		return (NULL);
	while (s[i] && s[i] != '\0')
	{
		memory[i] = f(i, s[i]);
		i++;
	}
	memory[i] = '\0';
	return (memory);
}
/*
int	main(void)
{
 	ft_strmapi("Hola", (char (ft_strlen)(unsigned int, char)));
 	return (0);
}*/
