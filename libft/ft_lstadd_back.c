/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:00:27 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/07 09:46:34 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Ajoute un élément à la fin de la liste chaînée en       */
/*   parcourant la liste jusqu'à ce que le dernier élément soit trouvé, puis  */
/*   relie le dernier élément au nouvel élément. Si la liste est vide, le     */
/*   nouvel élément devient la première et la dernière entrée.                */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - lst : Un pointeur vers un pointeur du premier élément de la liste.  */
/*      - new : Un pointeur vers l'élément à ajouter à la fin de la liste.    */
/*                                                                            */
/*   Retour :                                                                 */
/*      Aucun (la liste est modifiée directement).                            */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien en cas d'échec).                   */
/*                                                                            */
/* *****************************************************************   by.XVI */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*endlst;

	endlst = ft_lstlast(*lst);
	if (endlst)
		endlst->next = new;
	else
		*lst = new;
}
