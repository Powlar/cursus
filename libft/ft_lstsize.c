/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:17:22 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/06 10:32:51 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Calcule la taille de la liste chaînée.                  */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - lst : Un pointeur vers la tête de la liste chaînée dont on veut     */
/*              calculer la taille.                                           */
/*                                                                            */
/*   Retour :                                                                 */
/*      - Le nombre d'éléments dans la liste chaînée.                         */
/*                                                                            */
/*   Si échec :                                                               */
/*      Aucun (la fonction ne renvoie rien en cas d'échec).                   */
/*                                                                            */
/*   Description :                                                            */
/*      Cette fonction parcourt la liste chaînée à partir de sa tête (lst)    */
/*      en comptant le nombre d'éléments (n) rencontrés. Elle incrémente n    */
/*      à chaque élément de la liste et avance au suivant à l'aide du champ   */
/*      next. Une fois que tous les éléments ont été comptés, la fonction     */
/*      renvoie le nombre total, ce qui correspond à la taille de la liste.   */
/*                                                                            */
/* *****************************************************************   by.XVI */
int	ft_lstsize(t_list *lst)
{
	int	n;

	n = 0;
	while (lst != NULL)
	{
		n++;
		lst = lst->next;
	}
	return (n);
}
