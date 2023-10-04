/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:58:19 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 11:15:37 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Calcule la longueur de la chaîne de caractères 's'.     */
/*                                                                            */
/*   Paramètre :                                                              */
/*      - s : La chaîne de caractères dont on veut calculer la longueur.      */
/*                                                                            */
/*   Retour :                                                                 */
/*      La longueur de la chaîne 's' (c'est-à-dire le nombre de caractères    */
/*      dans 's', sans tenir compte du caractère nul de fin).                 */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien en cas d'échec)                    */
/*                                                                            */
/* ************************************************************************** */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
