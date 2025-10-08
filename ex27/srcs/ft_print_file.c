/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:13:16 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/08 19:16:59 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

size_t	ft_print_file(int fd)
{
	int		check_file;
	char	buffer[101];

	check_file = -1;
	while (check_file != 0)
	{
		check_file = read(fd, buffer, 100);
		if (check_file == -1)
		{
			ft_error_cannot_read();
			return (1);
		}
		write(1, buffer, check_file);
	}
	return (0);
}
