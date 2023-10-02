/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:37:35 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/02 09:46:10 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	while (s[i])
		i++;
	while (i > 0)
	{
		if (c == s[i])
			return (s + i);
		i--;
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
