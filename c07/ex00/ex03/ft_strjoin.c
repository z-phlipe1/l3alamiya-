/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagoudam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 22:32:42 by iagoudam          #+#    #+#             */
/*   Updated: 2025/09/04 01:39:16 by iagoudam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(int size, char **strs, char *sep)
{
	int	s;
	int	j;
	int	total;
	int	i;

	s = 0;
	while (sep[s])
		s++;
	total = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		total += j;
		i++;
	}
	total += (s * (size - 1));
	return (total + 1);
}

char	*ft_cpy(char *result, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;
	int	s;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		if (i < size - 1)
		{
			s = 0;
			while (sep[s])
				result[k++] = sep[s++];
		}
		i++;
	}
	result[k] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*result;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	total_len = str_len(size, strs, sep);
	result = malloc(total_len);
	if (!result)
		return (NULL);
	ft_cpy(result, strs, sep, size);
	return (result);
}
