/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagoudam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:08:24 by iagoudam          #+#    #+#             */
/*   Updated: 2025/08/28 18:32:31 by iagoudam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int main()
{
	char	s1[] = "issam";
	char	s2[] = "issan";
	int result;

	
	result = (ft_strcmp(s1, s2));
	if (result > 0)
	{
		printf("P");
	}
	if (result < 0)
	{
		printf("N");
	}
}
