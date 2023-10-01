/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:34:12 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/01 16:45:13 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	lendst = ft_strlen(dest);
	lensrc = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (lensrc);
	while (src[i] && (lendst + i < (dstsize - 1)))
	{
		dest[i + lendst] = src[i];
		i++;
	}
	if (i < dstsize)
		dest[i + lendst] = '\0';
	if (lendst > dstsize)
		return (lensrc + dstsize);
	return (lendst + lensrc);
}
