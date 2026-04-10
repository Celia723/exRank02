/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 13:12:59 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/09 13:45:02 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Nombre de la asignación: reverse_bits
Archivos esperados: reverse_bits.c
Funciones permitidas: ninguna
--------------------------------------------------------------------------------

Escribe una función que tome un byte, lo invierta bit por bit (como en el
ejemplo) y devuelva el resultado.

Tu función debe ser declarada de la siguiente manera:

unsigned char reverse_bits(unsigned char octet);

Ejemplo:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100
 */
#include <unistd.h>  // Para usar write()

unsigned char reverse_bits(unsigned char octet)
{
    unsigned char result = 0;  // Inicializamos el resultado
    int i = 7;  // Comenzamos con el bit más significativo (posición 7)

    while (i >= 0)
    {
        // Desplazamos el bit en la posición i hacia la derecha y lo aislamos con & 1
        // Luego lo desplazamos hacia su nueva posición en el resultado
        result |= ((octet >> i) & 1) << (7 - i);

        // Decrementamos i para pasar al siguiente bit
        i--;
    }

    return result;  // Devolvemos el byte con los bits invertidos
}