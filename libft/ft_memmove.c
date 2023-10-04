/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:22:57 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 10:56:56 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Copie les len premiers octets de la zone mémoire        */
/*   pointée par src dans la zone mémoire pointée par dst.                    */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - dst : Un pointeur vers la zone mémoire de destination               */
/*      - src : Un pointeur vers la zone mémoire source à copier              */
/*      - len : Le nombre d'octets à copier                                   */
/*                                                                            */
/*   Retour :                                                                 */
/*      - Un pointeur vers la zone mémoire de destination (dst).              */
/*                                                                            */
/*   Si échec :                                                               */
/*      - La fonction renvoie NULL si dst ou src est NULL.                    */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	if (src < dst)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
