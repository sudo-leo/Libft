/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:20:27 by larmelli          #+#    #+#             */
/*   Updated: 2021/01/14 12:58:55 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	i = 0;
	ptr_dest = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		if (ptr_src[i] == (unsigned char)c)
		{
			return ((void *)dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
