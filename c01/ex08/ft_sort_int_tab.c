/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagoudam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:45:43 by iagoudam          #+#    #+#             */
/*   Updated: 2025/08/30 13:22:34 by iagoudam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	o;
	int	swp;

	i = 0;
	while (i < size - 1)
	{
		o = 0;
		while (o < size - 1 - i)
		{
			if (tab[o] > tab[o + 1])
			{
				swp = tab[o];
				tab[o] = tab[o + 1];
				tab[o + 1] = swp;
			}
			o++;
		}
		i++;
	}
}
