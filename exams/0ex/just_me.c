/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   just_me.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagoudam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:09:00 by iagoudam          #+#    #+#             */
/*   Updated: 2025/08/28 17:47:35 by iagoudam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char	v;
	
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}

	i = 0;
	while (argv[1][i])
	{
		if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			argv[1][i] = 'z' - (argv[1][i] - 'a');
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			argv[1][i] = 'Z' - (argv[1][i] - 'A');
		}
		write (1, &argv[1][i], 1);
		i++;
	}
}
