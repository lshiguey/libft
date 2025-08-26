/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 19:01:20 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/25 21:56:51 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *ponteiro1, const char *ponteiro2, size_t qtd_b)
{
	size_t	index;

	if (!qtd_b)
		return (0);
	index = 0;
	while
	(
		ponteiro1[index] &&
		ponteiro1[index] == ponteiro2[index] &&
		index < (qtd_b - 1)
	)
		index++;
	return ((unsigned char)ponteiro1[index] - (unsigned char)ponteiro2[index]);
}
