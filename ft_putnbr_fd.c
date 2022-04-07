/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 19:13:37 by rkochary          #+#    #+#             */
/*   Updated: 2022/03/26 19:15:50 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = -n;
	}
	else
		number = n;
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd((number % 10) + 48, fd);
	}
	else
		ft_putchar_fd(number + 48, fd);
}
