/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:27:44 by iboiraza          #+#    #+#             */
/*   Updated: 2024/02/28 11:55:59 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	while (n)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

static char	*ft_calculate_itoa(char *output, int n, int digit_count)
{
	if (n < 0)
		n *= -1;
	while (n)
	{
		output[digit_count - 1] = n % 10 + '0';
		n = n / 10;
		digit_count --;
	}
	return (output);
}

char	*ft_itoa(int n)
{
	int		digit_count;
	char	*output;

	digit_count = ft_count_digits(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		output = ft_calloc(digit_count + 2, sizeof(char));
		if (!output)
			return (NULL);
		output[0] = '-';
		n *= -1;
		digit_count ++;
	}
	else
		output = ft_calloc(digit_count + 1, sizeof(char));
	if (!output)
		return (NULL);
	return (ft_calculate_itoa(output, n, digit_count));
}
/*
int main()
{
 	printf("%s\n", ft_itoa(-2147483648));
 	printf("%s\n", ft_itoa(-123456789));
 	printf("%s\n", ft_itoa(0));
 	printf("%s\n", ft_itoa(-1));
 	printf("%s\n", ft_itoa(1));
 	printf("%s\n", ft_itoa(123456789));
 	printf("%s\n", ft_itoa(2147483647));
 	printf("%s\n", ft_itoa(-10));
 	printf("%s\n", ft_itoa(-100));
 	printf("%s\n", ft_itoa(-1000));
 	return 0;
}*/
