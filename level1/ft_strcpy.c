/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:29:46 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/08 13:20:12 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c{}
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2); */

#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (s2[i])
	{
		s1[j] = s2[i];
		j++;
		i++;
	}
	s1[j] = '\0';
	return (s1);
}

int main(int argc, char const *argv[])
{
	char	word[80] = "Holacaracola";
	char	destnino[50];
	char	*result;
	
	result =  ft_strcpy(destnino, word + 2);
	printf ("%s\n", result);
	
	return 0;
}
