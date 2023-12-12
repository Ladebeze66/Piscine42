/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:54:48 by fgras-ca          #+#    #+#             */
/*   Updated: 2022/12/21 11:15:13 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == 0)
	{
		return (0);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	if (ac < 1)
		ac = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == 0)
	{
		return (0);
	}
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen (av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup (tab[i].str);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
