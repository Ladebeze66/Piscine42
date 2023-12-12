/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:44:26 by fgras-ca          #+#    #+#             */
/*   Updated: 2022/12/12 11:00:06 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resultat;

	resultat = 1;
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		resultat *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}	
	return (resultat);
}
