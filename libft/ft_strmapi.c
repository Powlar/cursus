/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:34:55 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 11:45:12 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Applique la fonction 'f' à chaque caractère de la       */
/*   chaîne de caractères 's' et crée une nouvelle chaîne avec les résultats. */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - s : La chaîne de caractères d'origine                               */
/*      - f : La fonction à appliquer à chaque caractère                      */
/*                                                                            */
/*   Retour :                                                                 */
/*      Une nouvelle chaîne de caractères résultant de l'application de la    */
/*      fonction 'f' à chaque caractère de 's'.                               */
/*                                                                            */
/*   Si échec :                                                               */
/*      Si l'allocation de mémoire échoue, la fonction renvoie NULL.          */
/*                                                                            */
/* *****************************************************************   by.XVI */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	if (!f)
		return (ft_strdup(s));
	dest = ft_strdup(s);
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	return (dest);
}
