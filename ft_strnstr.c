/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:05:34 by rkochary          #+#    #+#             */
/*   Updated: 2022/04/01 18:46:03 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j]
			&& haystack[i + j] != '\0' && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
		j = 0;
	}
	return (0);
}
