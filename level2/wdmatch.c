/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 16:07:20 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/14 11:43:41 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Nombre de la asignación: wdmatch
Archivos esperados: wdmatch.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escribe un programa que tome dos cadenas y compruebe si es posible
escribir la primera cadena con caracteres de la segunda cadena, respetando
el orden en que estos caracteres aparecen en la segunda cadena.

Si es posible, el programa muestra la cadena, seguida de un \n, de lo contrario
simplemente muestra un \n.

Si el número de argumentos no es 2, el programa muestra un \n.

Ejemplos:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
 */

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
