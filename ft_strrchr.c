/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:56:01 by rkochary          #+#    #+#             */
/*   Updated: 2022/04/01 18:48:19 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	tar;
	size_t			length;

	tar = c;
	length = ft_strlen(s) + 1;
	while (length)
	{
		if (s[--length] == tar)
			return ((char *)s + length);
	}
	return (0);
}
