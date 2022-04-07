/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:34:06 by rkochary          #+#    #+#             */
/*   Updated: 2022/04/02 16:12:12 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	size;

	if (!s1)
		return (0);
	size = ft_strlen(s1);
	ptr = malloc(size);
	ft_strlcpy(ptr, s1, size + 1);
	return (ptr);
}
