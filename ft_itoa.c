/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:35:43 by rkochary          #+#    #+#             */
/*   Updated: 2022/03/26 19:11:24 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static size_t	my_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;

	size = ft_count(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == 0)
		return (NULL);
	str[size] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		str[--size] = my_abs(n % 10) + '0';
		n /= 10;
	}
	return (str);
}
