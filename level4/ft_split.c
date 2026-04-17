/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:40:43 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/14 17:13:22 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/* Nombre de la tarea: ft_split
Archivos esperados: ft_split.c
Funciones permitidas: malloc
--------------------------------------------------------------------------------

Escribe una función que tome una cadena, la divida en palabras y las devuelva como
un array de cadenas terminado en NULL.

Una "palabra" se define como una parte de una cadena delimitada por espacios/tabulaciones/nuevas
líneas, o por el inicio/fin de la cadena.

Tu función debe ser declarada de la siguiente manera:
 */

 #include <stdlib.h>
 
 int count_words(char *str)
 {
	int i;
	int word;

	word = 0;
	i = 0;
	
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
		}
	
		if (str[i])
		{
			word++;
			i++;
		}

		while (str[i] != ' ' || str[i] != '\t' || str[i] != '\n' || str[i])
		{
			i++;
		}
	
	}
	return (word);
 }
 
char    **ft_split(char *str)
{
	char *matriz;
	int i;

	i = 0;
	matriz = malloc (sizeof(char *) * count_words(str));
	if (!matriz)
		return (NULL);
	while ()
	{
		/* code */
	}
	
}
