/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 18:49:16 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/08 14:54:40 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	//int	i;
	int	j;
	int end = ft_strlen(little);

	if(!little)
	{
		return ((char *)big);
	}

	//i = -1;
	//itterate through the big string
	while(big++)
	{
		j = 0;
		//itterate through the little string looking for matches
		while (*(little + j) == *(big + j) && (little + j))
		{
			j++;
		}
		if(j == end)
		{
			return((char *)(big));
		}
		//i++;
	}
	return (NULL);
}
