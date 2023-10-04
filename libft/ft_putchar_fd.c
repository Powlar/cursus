/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:47:23 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 10:59:05 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Écrit le caractère 'c' dans le descripteur de fichier   */
/*   'fd'.                                                                    */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - c : Le caractère à écrire                                           */
/*      - fd : Le descripteur de fichier où écrire le caractère               */
/*                                                                            */
/*   Retour :                                                                 */
/*      Aucun (la fonction ne renvoie rien)                                   */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien en cas d'échec)                    */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
