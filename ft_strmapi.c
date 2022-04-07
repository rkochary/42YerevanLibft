/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:38:09 by rkochary          #+#    #+#             */
/*   Updated: 2022/04/01 18:36:06 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*store;
	unsigned int	i;

	if (!s)
		return (NULL);
	store = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	while (s[i])
	{
		store[i] = f(i, s[i]);
		i++;
	}
	store[i] = '\0';
	return (store);
}
