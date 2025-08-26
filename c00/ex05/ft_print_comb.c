/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagoudam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:49:53 by iagoudam          #+#    #+#             */
/*   Updated: 2025/08/20 21:23:26 by iagoudam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7' )
	{
		b = a + 1;
		while (b <= '8' )
		{
			c = b + 1;
			while (c <= '9' )
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != '7' )
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
int main()
{
ft_print_comb();



}
