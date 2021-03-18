/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:40:51 by larmelli          #+#    #+#             */
/*   Updated: 2021/01/13 13:08:42 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t counter;
	size_t x;

	counter = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (*haystack == '\0')
		return (NULL);
	x = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= x)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, x) == 0)
			return (char *)haystack;
		haystack++;
		counter++;
	}
	return (NULL);
}
