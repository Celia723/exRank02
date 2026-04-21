/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 13:36:01 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/21 13:24:12 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline. */

#include <stdio.h>
#include <unistd.h>
void	rot_13(char const *str)
{
	int 	i;
	char 	*result;
	char	c;
	
	i = 0;
	while (str[i])
	{
		c = str[i];
		if(c >= 'a' && c <= 'z')
			c = (c - 'a' + 13) % 26 + 'a';
		else if(c >= 'A' && c <= 'Z')
			c = (c - 'A' + 13) % 26 + 'A';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);


	
	return (result);
}
int main(int argc, char const *argv[])
{
	char *result;
	
	if (argc != 2)
	{
		write (1, "\n", 2);
		return (0);
	}
	
	rot_13(argv[1]);
	return 0;
}
