/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdubey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:40:46 by hdubey            #+#    #+#             */
/*   Updated: 2022/02/06 16:14:18 by hdubey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_length(char *str)
{
	int	i;

	while (*str)
	{
		str++;
		i++;
		return (i);
	}
}

char	*ft_duplicate(char *src)
{
	int		length;
	int		i;
	char	*dup;

	lenth = 0;
	i = 0;
	while (src[length])
	{
		legnth++;
	}
	dup = (char *)malloc(sizeof(char) * (length + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	while (src[i])
	{
		dup[i] = src [i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct	s_stock	*ft_strs_to_tab(int ac, char **av)
{
	int		i;
	t_stock	*strs;

	strs = (t_stock *)malloc(sizeof(t_stock) * (ac + 1));
	if (strs == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		strs[i].size = ft_length(av[i]);
		strs[i].str = av[i];
		strs[i].copy = ft_duplicate(av[i]);
		i++;
	}
	strs[i].str = 0;
	return (strs);
}
