/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:46:00 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/01 12:59:13 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	white_start(char const *s)
{
	int	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

static int	white_end(char const *s)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	i++;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	int		len;
	char	*str_trimmed;

	if (s)
	{
		len = (white_end(s) - white_start(s));
		if (len <= 0)
		{
			str_trimmed = ft_strnew(1);
			return (str_trimmed);
		}
		else
			str_trimmed = ft_strnew(len);
		if (str_trimmed)
		{
			str_trimmed = ft_strsub(s, white_start(s), len);
			return (str_trimmed);
		}
	}
	return (NULL);
}
