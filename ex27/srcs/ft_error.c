/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:02:42 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/08 18:26:47 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_error_name_missing(void)
{
	write (2, "File name missing.\n", 19);
}

void	ft_error_argument(void)
{
	write (2, "Too many arguments.\n", 20);
}

void	ft_error_cannot_read(void)
{
	write (2, "Cannot read file.\n", 18);
}
