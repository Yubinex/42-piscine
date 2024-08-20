/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:54:33 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/14 10:17:18 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	len(char *buffer)
{
	unsigned int	i;

	i = 0;
	while (buffer[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc > 0)
		write(1, argv[0], len(argv[0]));
	write(1, "\n", 1);
	return (0);
}
