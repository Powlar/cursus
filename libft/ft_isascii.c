/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:18:05 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 11:43:47 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Vérifie si le caractère passé en argument est un        */
/*   caractère ASCII.                                                         */
/*                                                                            */
/*   Paramètre :                                                              */
/*      - c : Le caractère à vérifier                                         */
/*                                                                            */
/*   Retour :                                                                 */
/*      - 1 si c est un caractère ASCII, sinon 0                              */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien en cas d'échec)                    */
/*                                                                            */
/* *****************************************************************   by.XVI */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
