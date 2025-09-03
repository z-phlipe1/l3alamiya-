/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagoudam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:26:19 by iagoudam          #+#    #+#             */
/*   Updated: 2025/08/14 16:06:12 by iagoudam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_print_alphabet(void)
{
	char alpha = 'a';
	while(alpha <= 'z')
	{
		write(1, &alpha, 1);
			alpha++;
	}


}
int main()
{ft_print_alphabet();
return 0;
}
