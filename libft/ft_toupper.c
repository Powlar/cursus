/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:26:47 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 11:45:37 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Convertit un caractère minuscule en majuscule           */
/*   si c'est une lettre minuscule. Sinon, renvoie le caractère inchangé.     */
/*                                                                            */
/*   Paramètre :                                                              */
/*      - c : Le caractère à convertir                                        */
/*                                                                            */
/*   Retour :                                                                 */
/*      - Le caractère converti si c'est une lettre minuscule, sinon c        */
/*        caractère inchangé.                                                 */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien en cas d'échec)                    */
/*                                                                            */
/* *****************************************************************   by.XVI */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
