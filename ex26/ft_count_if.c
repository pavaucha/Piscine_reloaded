/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavaucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:43:07 by pavaucha          #+#    #+#             */
/*   Updated: 2017/11/07 16:59:13 by pavaucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (tab[i] != '\0')
	{
		if ((*f)(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
