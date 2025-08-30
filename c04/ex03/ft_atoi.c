/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagoudam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 20:44:26 by iagoudam          #+#    #+#             */
/*   Updated: 2025/08/30 22:11:43 by iagoudam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	ichara;
	int	result;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	ichara = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			ichara = (ichara * (-1));
		}
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * ichara);
}
