/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagoudam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:29:04 by iagoudam          #+#    #+#             */
/*   Updated: 2025/08/31 23:28:15 by iagoudam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	lhsab;

	lhsab = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		lhsab = (lhsab * nb);
		nb--;
	}
	return (lhsab);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(31));
}*/
