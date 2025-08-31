/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagoudam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 02:16:34 by iagoudam          #+#    #+#             */
/*   Updated: 2025/08/31 14:52:33 by iagoudam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	ft_strcmp(char *w1, char *w2)
{
	int	i;

	i = 0;
	while (w1[i] != '\0' && w1[i] == w2[i])
	{
		i++;
	}
	return (w1[i] - w2[i]);
}

void	issam(int argc, char **argv)
{
	int		j;
	int		i;
	char	*tmp;

	j = 1;
	while (j < argc - 1)
	{
		i = 1;
		while (i < argc -1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
			}
			i++;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	issam(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
