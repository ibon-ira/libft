/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:29:27 by iboiraza          #+#    #+#             */
/*   Updated: 2024/02/26 17:50:31 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			size;
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (s && str)
	{
		ft_strlcpy(str, &s[start], len + 1);
		return (str);
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s;
	int		start;
	size_t	len;

	s = "Buenos dias";
	start = 7;
	len = 10;
	printf("%s\n", ft_substr(s, start, len));
	return (0);
}*/
