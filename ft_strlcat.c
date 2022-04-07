/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:05:21 by rkochary          #+#    #+#             */
/*   Updated: 2022/04/01 18:27:26 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	s;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
	{
		j++;
	}
	d = j;
	s = ft_strlen(src);
	if (dstsize == 0 || dstsize <= d)
		return (s + dstsize);
	while (src[i] != '\0' && i < dstsize - d - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (d + s);
}
