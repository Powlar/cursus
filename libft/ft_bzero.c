/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:18:29 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 11:43:32 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Remplit les n premiers octets de la mémoire pointée par */
/*   s avec l'octet nul (valeur 0).                                           */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - s : Un pointeur vers la mémoire à remplir                           */
/*      - n : Le nombre d'octets à remplir                                    */
/*                                                                            */
/*   Retour :                                                                 */
/*      Aucun                                                                 */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien)                                   */
/*                                                                            */
/* *****************************************************************   by.XVI */
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || !s)
		return ;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}
