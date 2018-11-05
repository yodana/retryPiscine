/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yodana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 19:09:51 by yodana            #+#    #+#             */
/*   Updated: 2018/11/05 19:27:12 by yodana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int resultat;

	resultat = 1;
	if (nb < 0 || nb >= 12)
		return (0);
	while (nb != 1)
	{
		resultat = resultat * nb;
		nb--;
	}
	return (resultat);
}
