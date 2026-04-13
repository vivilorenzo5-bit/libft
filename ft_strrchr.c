/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:03:28 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/13 12:14:45 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	ch = (unsigned char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
