/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:52:23 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/25 21:56:30 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destino, const void *origem, size_t qtd_b)
{
	size_t	index;

	if (qtd_b == 0 || (!destino && !origem))
		return (destino);
	index = 0;
	while (index < qtd_b)
	{
		((unsigned char *)destino)[index] = ((unsigned char *)origem)[index];
		index++;
	}
	return (destino);
}
