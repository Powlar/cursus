/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:25:06 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 11:45:15 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Compare les n premiers caractères des chaînes de        */
/*   caractères 's1' et 's2'.                                                 */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - s1 : La première chaîne de caractères à comparer                    */
/*      - s2 : La deuxième chaîne de caractères à comparer                    */
/*      - n : Le nombre de caractères à comparer                              */
/*                                                                            */
/*   Retour :                                                                 */
/*      - Un entier négatif, nul ou positif si les n premiers caractères de   */
/*        's1' sont respectivement inférieurs, égaux ou supérieurs aux n      */
/*        premiers caractères de 's2'.                                        */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien en cas d'échec)                    */
/*                                                                            */
/* *****************************************************************   by.XVI */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && n > 0)
	{
		n--;
		i++;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
