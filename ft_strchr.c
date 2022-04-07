/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:06:53 by rkochary          #+#    #+#             */
/*   Updated: 2022/04/02 19:54:07 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	tar;

	if (!c)
		return ((char *)s + ft_strlen(s));
	tar = c;
	while (*s)
	{
		if (*s == tar)
			return ((char *)s);
		else if (!(*s++))
			return (0);
	}
	return (0);
}
