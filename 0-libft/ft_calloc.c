/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:51:39 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/02 11:00:18 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	full_size;
	void	*ptr;

	full_size = count * size;
	ptr = malloc(full_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, full_size);
	return (ptr);
}
