/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagoudam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:14:23 by iagoudam          #+#    #+#             */
/*   Updated: 2025/08/29 13:57:27 by iagoudam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	char *last;

	if (argc > 1)
	{
		i = 0;
		last = argv[argc - 1];
		while (last[i] != '\0')
		{
			write(1, &last[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
