/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceboyero <ceboyero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 17:28:15 by ceboyero          #+#    #+#             */
/*   Updated: 2026/04/17 17:28:18 by ceboyero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void	print_hex(unsigned long n)
{
	char *base = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &base[n % 16], 1);
}

int	main(int argc, char **argv)
{
	unsigned long n;
	int i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	n = 0;
	i = 0;
	while (argv[1][i])
	{
		n = n * 10 + (argv[1][i] - '0');
		i++;
	}
	print_hex(n);
	write(1, "\n", 1);
	return (0);
}