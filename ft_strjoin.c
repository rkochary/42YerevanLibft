/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:34:01 by rkochary          #+#    #+#             */
/*   Updated: 2022/04/01 18:14:39 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*concat;

	i = 0;
	j = 0;
	if (s1)
	{
		while (s1[i])
			i++;
	}	
	if (s2)
	{
		while (s2[j])
			j++;
	}
	concat = (char *)malloc((i + j + 1) * sizeof(char));
	ft_memmove(concat, s1, i + 1);
	ft_strlcat(concat, s2, i + j + 1);
	return (concat);
}
