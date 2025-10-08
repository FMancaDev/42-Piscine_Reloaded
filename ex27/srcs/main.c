/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:43:40 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/08 18:49:44 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char *argv[])
{
	int	fd;
	int	check_file;

	check_file = -1;
	if (argc != 2)
	{
		if (argc < 2)
			ft_error_name_missing();
		if (argc > 2)
			ft_error_argument();
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_error_cannot_read();
		return (1);
	}
	check_file = ft_print_file(fd);
	if (check_file != 0)
		return (1);
	close(fd);
	return (0);
}
