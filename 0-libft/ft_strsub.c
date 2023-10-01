/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:13:49 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/01 16:20:27 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	k;

	if (s)
	{
		dest = ft_strnew(len);
		if (dest)
		{
			i = start;
			k = 0;
			while (k < len)
				dest[k++] = s[i++];
			dest[k] = '\0';
			return (dest);
		}
	}
	return (NULL);
}
