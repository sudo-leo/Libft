/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:26:26 by larmelli          #+#    #+#             */
/*   Updated: 2021/01/14 16:38:11 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;
	int		index;

	index = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	dest = malloc((i + 1) * sizeof(char));
	if (dest == 0)
		return (NULL);
	while (index < i)
	{
		dest[index] = s1[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
