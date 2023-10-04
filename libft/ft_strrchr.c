/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:37:35 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 11:45:22 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Recherche la dernière occurrence du caractère 'c' dans  */
/*   la chaîne de caractères 's'.                                             */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - s : La chaîne de caractères dans laquelle rechercher                */
/*      - c : Le caractère à rechercher                                       */
/*                                                                            */
/*   Retour :                                                                 */
/*      - Un pointeur vers la dernière occurrence de 'c' dans 's' si elle     */
/*        est trouvée, sinon NULL.                                            */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien en cas d'échec)                    */
/*                                                                            */
/* *****************************************************************   by.XVI */
char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*s_copy;

	s_copy = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *s_copy && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
