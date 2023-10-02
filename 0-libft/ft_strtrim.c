/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:26:23 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/02 10:51:02 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(const char c, const char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}

static	size_t	trimmed_len(const char *str, const char *sep)
{
	int		i;
	int		k;
	size_t	len;

	len = 0;
	i = 0;
	while (str[i])
	{
		k = 0;
		while (sep[k])
		{
			if (str[i] != sep[k])
				len++;
			k++;
		}
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	size_t	len;
	char	*dest;

	i = 0;
	k = 0;
	len = trimmed_len(s1, set);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		if (is_sep(s1[i], set) == 0)
		{
			dest[k] = s1[i];
			k++;
		}
		i++;
	}
	return (dest);
}
