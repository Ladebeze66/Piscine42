/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 10:50:07 by fgras-ca          #+#    #+#             */
/*   Updated: 2022/12/18 11:45:43 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	malloc_size(int size, char **strs, char *sep)
{
	int	i;
	int	resultat;

	if (size == 0)
	{
		return (1);
	}
	i = 0;
	resultat = 0;
	while (i < size)
	{
		resultat += ft_strlen(strs[i]);
		i++;
	}
	resultat += ft_strlen(sep) * (size - 1);
	return (resultat + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*resultat;
	int		i;

	resultat = malloc((sizeof(char)) * malloc_size(size, strs, sep));
	if (resultat == 0)
	{
		return (0);
	}
	resultat[0] = 0;
	if (size == 0)
	{
		return (resultat);
	}
	i = 0;
	while (i < size)
	{
		ft_strcat(resultat, strs[i]);
		if (i != size -1)
		{
			ft_strcat(resultat, sep);
		}
		i++;
	}
	resultat[ft_strlen(resultat)] = '\0';
	return (resultat);
}
