/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 17:00:02 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/13 10:57:08 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (0);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (dest);
}
