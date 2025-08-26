/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:40:42 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/25 22:01:07 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ind1;
	size_t	ind2;

	if (!*little)
		return ((char *)big);
	ind1 = 0;
	while (big[ind1] && ind1 < len)
	{
		ind2 = 0;
		while (big[ind1 + ind2] == little[ind2]
			&& (ind1 + ind2) < len)
		{
			if (!little[++ind2])
				return ((char *)&big[ind1]);
		}
		ind1++;
	}
	return (NULL);
}
