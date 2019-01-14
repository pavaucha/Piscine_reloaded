/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavaucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:08:06 by pavaucha          #+#    #+#             */
/*   Updated: 2017/11/06 16:17:28 by pavaucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb > 12 || nb < 0)
		return (0);
	if (nb > 1 && nb <= 12)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
