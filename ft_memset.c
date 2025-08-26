/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:16:42 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/25 22:21:55 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ponteiro, int valor, size_t qtd_b)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)ponteiro;
	while (i < qtd_b)
		temp[i++] = (unsigned char)valor;
	return (ponteiro);
}
