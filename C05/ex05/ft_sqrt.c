/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:05:20 by fgras-ca          #+#    #+#             */
/*   Updated: 2022/12/14 15:58:40 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	i = 1;
	while (i < nb / i && i < 46341)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return (0);
}
