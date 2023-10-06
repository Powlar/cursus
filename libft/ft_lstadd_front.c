/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:58:34 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/06 10:33:40 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Ajoute un nouvel élément en tête de la liste chaînée.   */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - lst : Un pointeur vers un pointeur de liste, qui pointe vers la     */
/*              tête de la liste à laquelle ajouter l'élément.                */
/*      - new : Un pointeur vers l'élément de liste à ajouter en tête.        */
/*                                                                            */
/*   Retour :                                                                 */
/*      Aucun (la fonction ne renvoie rien).                                  */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien en cas d'échec).                   */
/*                                                                            */
/*   Description :                                                            */
/*      Cette fonction prend un pointeur vers un pointeur de liste (lst) et   */
/*      un pointeur vers un nouvel élément de liste (new). Elle ajoute        */
/*      l'élément new en tête de la liste en modifiant les pointeurs de       */
/*      manière à ce que new devienne le premier élément de la liste. Le      */
/*      champ next de new pointe vers l'ancien premier élément, puis le       */
/*      pointeur lst est mis à jour pour pointer vers new, faisant de new     */
/*      la nouvelle tête de la liste.                                         */
/*                                                                            */
/* *****************************************************************   by.XVI */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
