/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:25:31 by iboiraza          #+#    #+#             */
/*   Updated: 2024/04/01 17:22:21 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_splits(char const *s, char c)
{
	int	count;
	int	first_letter;

	count = 0;
	first_letter = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (first_letter == 0)
			{
				count++;
				first_letter = 1;
			}
		}
		else
			first_letter = 0;
		s++;
	}
	return (count);
}

static int	ft_sub_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (i);
}

static char	**ft_free_mem(char **result, int i)
{
	while (i >= 0)
	{
		free(result[i--]);
	}
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		splits;
	int		i;
	int		len;
	char	**result;

	splits = ft_count_splits(s, c);
	result = (char **)malloc((splits + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < splits)
	{
		while (*s == c)
			s++;
		len = ft_sub_len(s, c);
		result[i] = (char *)malloc((len + 1) * sizeof(char));
		if (!result[i])
			return (ft_free_mem(result, i));
		ft_strlcpy(result[i], s, len + 1);
		s = s + len;
		i++;
	}
	result[splits] = NULL;
	return (result);
}
/*
int main() {
    char	*str = "Hola,agua,perro, zapato";
    char	 i = ',';
	char	**split = NULL;
	char	*save;

	printf("Before location: \n");
	printf("String: %s\n", str);
	printf("Char to locate: %c\n", i);
	split = ft_split(str, i);
	save = *split;
	while (*split)
	{
		printf("After location: %s\n", *split);
		split++;
	}
}*/
