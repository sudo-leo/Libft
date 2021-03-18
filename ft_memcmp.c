/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 15:10:07 by larmelli          #+#    #+#             */
/*   Updated: 2021/01/14 15:19:46 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *pd;
	unsigned char *ps;

	pd = (unsigned char *)s1;
	ps = (unsigned char *)s2;
	while (n--)
	{
		if (*pd == *ps)
		{
			pd++;
			ps++;
		}
		else
			return (*pd - *ps);
	}
	return (0);
}
