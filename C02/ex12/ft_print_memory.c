/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:48:12 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/06 17:58:12 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_hex_mem(unsigned long addr);
void	write_hex_byte(unsigned char c);
void	write_ascii(unsigned char c);
void	write_line(unsigned int *i, unsigned char *ptr, unsigned int size);
void	*ft_print_memory(void *addr, unsigned int size);

void	write_hex_mem(unsigned long addr)
{
	char	*hex_digits;
	char	buffer[16];
	int		index;

	hex_digits = "0123456789abcdef";
	index = 15;
	while (index >= 0)
	{
		buffer[index] = hex_digits[addr % 16];
		addr /= 16;
		index--;
	}
	write(1, buffer, 16);
	write(1, ": ", 2);
}

void	write_hex_byte(unsigned char c)
{
	char	*hex_digits;
	char	hex[2];

	hex_digits = "0123456789abcdef";
	hex[0] = hex_digits[(c / 16)];
	hex[1] = hex_digits[(c % 16)];
	write(1, hex, 2);
}

void	write_ascii(unsigned char c)
{
	if (c < 32 || c > 126)
		write(1, ".", 1);
	else
		write(1, &c, 1);
}

void	write_line(unsigned int *i, unsigned char *ptr, unsigned int size)
{
	unsigned int	j;

	j = 0;
	while (j < 16 && (j + *i) < size)
	{
		write_hex_byte(ptr[j + *i]);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
	if ((j + *i) >= size)
		write(1, "00 ", 3);
	while (j < 15)
	{
		write(1, "  ", 2);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;
	unsigned int	j;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		write_hex_mem((unsigned long)(addr + i));
		j = 0;
		write_line(&i, ptr, size);
		j = 0;
		while (j < 16 && (i + j) < size)
		{
			if (j == 0)
				write(1, " ", 1);
			write_ascii(ptr[j + i]);
			j++;
		}
		i += 16;
		write(1, "\n", 1);
	}
	return (addr);
}

// int	ft_strlen(char *str)
// {
// 	int	len;

// 	len = 0;
// 	while (str[len] != '\0')
// 		len++;
// 	return (len);
// }

// int	main(void)
// {
// 	char data[] = "Bonjour c'est une bonne jour, "
// 		"il\tfait chaude\t\tmais sur la mainsion de 42 "
// 		"que je s'asseoir il y a des cimatiseurss\n";

// 	ft_print_memory(data, ft_strlen(data));
// 	return (0);
// }
