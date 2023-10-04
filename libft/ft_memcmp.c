/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:42:35 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 11:44:06 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Compare les n premiers octets des zones mémoire         */
/*   pointées par s1 et s2.                                                   */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - s1 : Un pointeur vers la première zone mémoire à comparer           */
/*      - s2 : Un pointeur vers la deuxième zone mémoire à comparer           */
/*      - n : Le nombre d'octets à comparer                                   */
/*                                                                            */
/*   Retour :                                                                 */
/*      - Un entier négatif, nul ou positif si les n premiers octets de s1    */
/*        sont respectivement inférieurs, égaux ou supérieurs aux n premiers  */
/*        octets de s2.                                                       */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien en cas d'échec)                    */
/*                                                                            */
/* *****************************************************************   by.XVI */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (i < n && *(char *)(s1 + i) == *(char *)(s2 + i))
		i++;
	if (i == n)
		return (0);
	else
		return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
