/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:21:47 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/25 21:57:55 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *valor)
{
	int	index;
	int	sinal;

	index = 0;
	sinal = 1;
	while ((*valor >= '\t' && *valor <= '\r') || *valor == ' ')
		valor++;
	if (*valor == '-' || *valor == '+')
	{
		if (*valor == '-')
			sinal = -1;
		valor++;
	}
	while (ft_isdigit(*valor))
	{
		index *= 10;
		index += *valor - '0';
		valor++;
	}
	return (index * sinal);
}
