/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavaucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:49:28 by pavaucha          #+#    #+#             */
/*   Updated: 2017/11/06 16:16:49 by pavaucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	result = nb;
	while (nb > 1)
	{
		result *= nb - 1;
		nb--;
	}
	return (result);
}
