/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:08:36 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 11:43:44 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Vérifie si le caractère passé en argument est une 	  */
/*   lettre alphabétique.                                                     */
/*                                                                            */
/*   Paramètre :                                                              */
/*      - c : Le caractère à vérifier                                         */
/*                                                                            */
/*   Retour :                                                                 */
/*      - 1 si c est une lettre alphabétique, sinon 0                         */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien en cas d'échec)                    */
/*                                                                            */
/* *****************************************************************   by.XVI */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
