/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:56:02 by larmelli          #+#    #+#             */
/*   Updated: 2021/01/14 15:09:30 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ps;

	ps = (unsigned char *)s;
	while (n--)
	{
		if (*ps == (unsigned char)c)
			return (ps);
		else
			ps++;
	}
	return (NULL);
}
