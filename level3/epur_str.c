/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 18:06:55 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/10 20:07:03 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Escribe un programa que tome una cadena y muestre esta cadena con exactamente un
espacio entre palabras, sin espacios ni tabulaciones ni al principio ni al final,
seguido de un \n.

Una "palabra" se define como una parte de una cadena delimitada ya sea por espacios/tabulaciones, o
por el principio/fin de la cadena.

Si el número de argumentos no es 1, o si no hay palabras para mostrar, el
programa muestra \n.

Ejemplo:

$> ./epur_str "See? It's easy to print the same thing" | cat -e
See? It's easy to print the same thing$
$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$> */

#include <unistd.h>



void epur_str(char const *cadena)
{
	int i;
	
	i = 0;
	while (cadena[i])
	{
		while (cadena[i] == ' ' || cadena[i] == '	')
		{
			i++;
		}
		if (cadena[i] == '\0')
		{
			write(1, "\n", 1);
			return ;
		}
		else
		{
			while (cadena[i] != ' ' && cadena[i] != '	' && cadena[i])
			{
				
				write(1, &cadena[i], 1);
				i++;
			}

			if (cadena[i + 1])
					write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	
}



int main(int argc, char const *argv[])
{
	if (argc != 2)
		return(write(1, "\n", 1), 0);
	epur_str(argv[1]);
	
	return 0;
}

