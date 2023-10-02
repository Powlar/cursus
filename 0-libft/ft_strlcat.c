/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:34:12 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/02 10:06:24 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	lendst = 0;
	lensrc = 0;
	while (dest[lendst])
		lendst++;
	while (src[lensrc])
		lensrc++;
	i = 0;
	if (dstsize <= lendst)
		return (lensrc + lendst);
	while (src[i] && (lendst + i < (dstsize - 1)))
	{
		dest[i + lendst] = src[i];
		i++;
	}
	dest[i + lendst] = '\0';
	return (lendst + lensrc);
}
