/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:42:35 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/01 17:53:01 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (i < n && *(char *)(s1 + i) == *(char *)(s2 + i))
		i++;
	if (i == n)
		return (0);
	else
		return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
