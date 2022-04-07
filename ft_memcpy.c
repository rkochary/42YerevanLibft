/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:27:07 by rkochary          #+#    #+#             */
/*   Updated: 2022/04/01 17:36:06 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*a;
	char		*b;

	i = 0;
	a = (char *)dst;
	b = (char *)src;
	if (src == dst)
		return (dst);
	if (!a && !b)
		return (a);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
