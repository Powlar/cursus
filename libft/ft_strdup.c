/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:37:33 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 11:44:47 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Duplique une chaîne de caractères 's1' dans une         */
/*   nouvelle allocation mémoire.                                             */
/*                                                                            */
/*   Paramètre :                                                              */
/*      - s1 : La chaîne de caractères à dupliquer                            */
/*                                                                            */
/*   Retour :                                                                 */
/*      - Un pointeur vers la nouvelle chaîne de caractères dupliquée.        */
/*      - NULL en cas d'échec d'allocation mémoire.                           */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction renvoie NULL en cas d'échec d'allocation mémoire). */
/*                                                                            */
/* *****************************************************************   by.XVI */
char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
