/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:28:13 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/06 11:19:17 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Renvoie un pointeur vers le dernier élément de la liste */
/*   en parcourant la liste jusqu'à ce que le pointeur vers le prochain       */
/*   élément soit NULL.                                                       */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - lst : Un pointeur vers le premier élément de la liste.              */
/*                                                                            */
/*   Retour :                                                                 */
/*      - Un pointeur vers le dernier élément de la liste.                    */
/*      - NULL si la liste est vide (lst == NULL).                            */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien en cas d'échec).                   */
/*                                                                            */
/* *****************************************************************   by.XVI */
t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
