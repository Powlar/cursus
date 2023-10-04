/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:54:09 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 11:44:29 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Écrit la chaîne de caractères 's' suivie d'un saut de   */
/*   ligne dans le descripteur de fichier 'fd'.                               */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - s : La chaîne de caractères à écrire                                */
/*      - fd : Le descripteur de fichier où écrire la chaîne et le saut de    */
/*        ligne                                                               */
/*                                                                            */
/*   Retour :                                                                 */
/*      Aucun (la fonction ne renvoie rien)                                   */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien en cas d'échec)                    */
/*                                                                            */
/* *****************************************************************   by.XVI */
void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
