/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:12:25 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/07 18:28:54 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str); */

#include <stdio.h>
int	ft_strlen(char *str)
{
	 int i;

	 i = 0;

	 while (str[i])
	 {
		i++;
	 }
	 return (i);
}

int main(int argc, char const *argv[])
{
	char	*saludo = "holaaaa";
	int		n;

	printf("%s\n",saludo);
	n = ft_strlen(saludo);
	printf("num: %d", n);
	
	return 0;
}
