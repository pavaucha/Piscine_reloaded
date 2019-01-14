/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavaucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 08:35:48 by pavaucha          #+#    #+#             */
/*   Updated: 2017/11/07 17:03:10 by pavaucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	**ft_compare(char **str, int argc)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			argv = ft_compare(argv, argc);
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
