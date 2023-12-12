/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:42:46 by fgras-ca          #+#    #+#             */
/*   Updated: 2022/12/12 12:13:42 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultat;
	int	i;

	i = 0;
	resultat = 1;
	if (power == 0)
		return (1);
	if (nb == 0 && power == 0)
	{	
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		resultat *= nb;
		i++;
	}
	return (resultat);
}
