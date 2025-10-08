/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:26:23 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/07 15:56:04 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	n;
	int	size;
	int	*dest;

	if (min >= max)
		return (NULL);
	size = (max - min);
	dest = (int *)malloc(sizeof(int) * (size));
	if (!dest)
		return (NULL);
	i = 0;
	n = min;
	while (n < max)
	{
		dest[i] = n;
		n += 1;
		i++;
	}
	return (dest);
}
