/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 13:36:01 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/08 15:36:03 by ceboyero         ###   ########.fr       */
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
char	*rot_13(char const *word)
{
	int i;
	char *result;
	i = 0;
	while (word[i])
	{
		result[i] = word[i] + 13;
		i++;
	}
	result[i] = '\0';
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
	
	printf("%s\n", argv[1]);
	result = rot_13(argv[1]);
	printf("nuvo: %s\n",result );
	return 0;
}
