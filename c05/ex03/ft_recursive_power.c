/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagoudam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 23:45:17 by iagoudam          #+#    #+#             */
/*   Updated: 2025/09/02 05:49:36 by iagoudam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 1)
	{
		return (nb);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
/*#include <stdio.h>
int main ()
{
	printf("%d", ft_recursive_power(5, 5));
}*/
