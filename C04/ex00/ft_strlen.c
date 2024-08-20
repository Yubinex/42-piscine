/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:51:00 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/07 13:54:01 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// int main()
// {
//     char str1[] = "Hello, world!";
//     char str2[] = "42";

//     printf("Length of \"%s\" is %d\n", str1, ft_strlen(str1));
//     printf("Length of \"%s\" is %d\n", str2, ft_strlen(str2));
//     return 0;
// }
