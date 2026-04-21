/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:31:54 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/21 13:43:26 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int i;
	int j; //veces
	
	i = 0;
	
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' )
		{
			if (str[i] >= 'a')
				j = str[i] - 'a' + 1;
			
			if (str[i] >= 'A')
				j = str[i] - 'A' + 1;

			while (j--)
			{
				write(1, &str[i], 1);
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	
}