/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 16:07:20 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/10 17:52:53 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char	const *str)
{
	int i;
	
	i= 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void wdmatch(char const *find, char const *str)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	
	if (!find || !str)
		return ;

	
	while (str[j] && find[i])
	{
		if (find[i] == str[j])
		{
			i++;
		}
		j++;
	}
		if (!find[i])
			write (1, find, ft_strlen(find));
			
		write(1, "\n", 1);
	
	
	
}

int main(int argc, char const *argv[])
{
	
	
/* 	char	*s1 = "hola";
	char	*s2 = "h kkoklkkkkkak"; */
	
	
	if (argc != 3)
		return (write(1, "\n", 1));
	wdmatch(argv[1],argv[2]);
	return 0;
}
