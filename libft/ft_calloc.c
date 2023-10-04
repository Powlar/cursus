/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:51:39 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 10:48:22 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Alloue et initialise un bloc de mémoire à zéro.         */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - count : Le nombre d'éléments à allouer                              */
/*      - size : La taille de chaque élément                                  */
/*                                                                            */
/*   Retour :                                                                 */
/*      Un pointeur vers le bloc de mémoire alloué et initialisé à zéro.      */
/*      Si l'allocation échoue, la fonction renvoie NULL.                     */
/*                                                                            */
/*   Si échec :                                                               */
/*      La fonction renvoie NULL si l'allocation échoue.                      */
/*                                                                            */
/* ************************************************************************** */
void	*ft_calloc(size_t count, size_t size)
{
	size_t	full_size;
	void	*ptr;

	full_size = count * size;
	ptr = malloc(full_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, full_size);
	return (ptr);
}
