/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 20:12:07 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/06 20:24:04 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	j;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	j = nb;
	while (j > 1)
	{
		j--;
		if (nb > 2147483648 / j)
			return (0);
		else
			nb *= j;
	}
	return (nb);
}
