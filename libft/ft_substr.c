/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:13:49 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 11:45:29 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Crée une nouvelle chaîne de caractères qui est une      */
/*   sous-chaîne de 's', débutant à l'index 'start' et d'une longueur 'len'.  */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - s : La chaîne de caractères source                                  */
/*      - start : L'index de départ pour la sous-chaîne                       */
/*      - len : La longueur de la sous-chaîne                                 */
/*                                                                            */
/*   Retour :                                                                 */
/*      - Une nouvelle chaîne de caractères allouée dynamiquement             */
/*        contenant la sous-chaîne de 's'.                                    */
/*                                                                            */
/*   Si échec :                                                               */
/*      La fonction renvoie NULL si l'allocation de mémoire échoue.           */
/*                                                                            */
/* *****************************************************************   by.XVI */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = *(s + start + i);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
