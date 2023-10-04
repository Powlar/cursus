/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:49:41 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 11:06:30 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Écrit la chaîne de caractères 's' dans le descripteur   */
/*   de fichier 'fd'.                                                         */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - s : La chaîne de caractères à écrire                                */
/*      - fd : Le descripteur de fichier où écrire la chaîne de caractères.   */
/*                                                                            */
/*   Retour :                                                                 */
/*      Aucun (la fonction ne renvoie rien)                                   */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien en cas d'échec)                    */
/*                                                                            */
/* ************************************************************************** */
void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
