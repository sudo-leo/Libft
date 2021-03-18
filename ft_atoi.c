/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:51:18 by larmelli          #+#    #+#             */
/*   Updated: 2021/01/20 16:30:06 by larmelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_atoi_atoi(char *str, int minus)
{
	int		i;
	long	fin;

	i = 0;
	fin = 0;
	while (((unsigned char)str[i] >= '0') && ((unsigned char)str[i] <= '9'))
	{
		if ((((fin * 10) + (str[i] - 48)) < fin) && (minus == 1))
			return (-1);
		else if ((((fin * 10) + (str[i] - 48)) < fin) && (minus == -1))
			return (0);
		fin = (fin * 10) + ((unsigned char)str[i] - 48);
		i++;
	}
	return (fin);
}

int			ft_atoi(const char *str)
{
	int		i;
	long	fin;
	char	*s;
	int		minus;

	i = 0;
	s = (char *)str;
	minus = 1;
	while (((s[i] == '\t') || (s[i] == '\n') || (s[i] == '\v') ||
			(s[i] == '\f') || (s[i] == '\r') || (s[i] == '\x1b') ||
			(s[i] == ' ')) && (s[i] != '\e'))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	fin = ft_atoi_atoi(&s[i], minus);
	fin = fin * minus;
	return ((int)fin);
}
