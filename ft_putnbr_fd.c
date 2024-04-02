/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <iboiraza@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:53:28 by iboiraza          #+#    #+#             */
/*   Updated: 2024/03/02 10:58:03 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	copy;

	copy = n;
	if (copy < 0)
	{
		copy = (copy * -1);
		write(fd, "-", 1);
	}
	if (copy >= 10)
	{
		ft_putnbr_fd(copy / 10, fd);
		ft_putchar_fd((copy % 10) + '0', fd);
	}
	else
		ft_putchar_fd(copy + '0', fd);
}
/*
int main()
{
	ft_putnbr_fd(-102, 1);
	return (0);
}*/
