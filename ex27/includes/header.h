/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:40:48 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/08 18:40:52 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>

void	ft_error_name_missing(void);
void	ft_error_argument(void);
void	ft_error_cannot_read(void);
void	ft_putchar(char c);
void	ft_putstr(char *str);
size_t	ft_print_file(int fd);

#endif
