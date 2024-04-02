/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:53:45 by iboiraza          #+#    #+#             */
/*   Updated: 2024/02/26 17:52:28 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	l;
	char			*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	l = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (i == l + 1)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[l]))
		l--;
	str = ft_substr(s1, i, l - i + 1);
	if (!str)
		return (NULL);
	return (str);
}
/*
int	main(void)
{
	char	*s;
	char	*set;

	s = "";
	set = "nMa e";
	printf("%s\n", ft_strtrim(s, set));
	return (0);
}*/
