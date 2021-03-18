/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 11:32:11 by larmelli          #+#    #+#             */
/*   Updated: 2021/01/17 11:40:24 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		index;
	char		*ris;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	index = ft_strlen(s1);
	while (index && ft_strchr(set, s1[index]))
		index--;
	ris = ft_substr((char*)s1, 0, index + 1);
	return (ris);
}
