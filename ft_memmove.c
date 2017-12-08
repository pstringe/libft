/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 19:22:58 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/08 13:12:26 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	const char *s;

	d = (char *)dst;
	s = (const char *)src;

	if (s < d)
	{
		s += len;
		d += len;

		while (len && src && dst)
		{
			*d--= *s--;
			len--;
		}
	}
	else
	{
		while (len && src && dst)
		{
			*d++ = *s++;
			len--;
		}
	}
	return(dst);
}
