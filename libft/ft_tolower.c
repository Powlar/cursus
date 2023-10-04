/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:29:50 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 11:45:33 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Convertit un caractère majuscule en caractère minuscule */
/*   si c'est une lettre majuscule. Sinon, renvoie le caractère inchangé.     */
/*                                                                            */
/*   Paramètre :                                                              */
/*      - c : Le caractère à convertir                                        */
/*                                                                            */
/*   Retour :                                                                 */
/*      - Le caractère converti si c'est une lettre majuscule, sinon c        */
/*        caractère inchangé.                                                 */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien en cas d'échec)                    */
/*                                                                            */
/* *****************************************************************   by.XVI */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
