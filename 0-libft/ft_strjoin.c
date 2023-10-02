/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:53:44 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/02 10:24:47 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*dest;
	int		i;
	int		c;

	i = 0;
	c = 0;
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = (char *) malloc(sizeof(char) * size);
	if (!dest)
		return (NULL);
	while (s1[i])
		dest[c++] = s1[i++];
	i = 0;
	while (s2[i])
		dest[c++] = s2[i++];
	dest[c] = '\0';
	return (dest);
}
