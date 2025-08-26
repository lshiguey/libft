/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:49:15 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/25 21:58:05 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t qtd_memb, size_t size)
{
	size_t	size_total;
	void	*temp;

	if (!qtd_memb || !size)
		return (malloc(0));
	size_total = qtd_memb * size;
	if (size_total / size != qtd_memb)
		return (NULL);
	temp = malloc(size_total);
	if (!temp)
		return (NULL);
	ft_bzero(temp, size_total);
	return (temp);
}
