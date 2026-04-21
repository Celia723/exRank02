/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:05:18 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/21 16:41:17 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
## Subject

```C
Nombre de la asignación: camel_to_snake
Archivos esperados: camel_to_snake.c
Funciones permitidas: malloc, realloc, write
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena única en formato lowerCamelCase
y la convierta en una cadena en formato snake_case.

Una cadena en lowerCamelCase es una cadena donde cada palabra comienza con una letra mayúscula
excepto la primera.

Una cadena en snake_case es una cadena donde cada palabra está en minúsculas, separadas por
un guion bajo "_".

Ejemplos:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$

``` */

#include <unistd.h>

void camel_to_snake(char *)
{
		
}

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	camel_to_snake(argv[1]);
	return 0;
}
