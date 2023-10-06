/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:00:27 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/06 11:20:15 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_lstadd_back                                            */
/*   Fonctionnement : Ajoute un élément à la fin de la liste en utilisant la  */
/*   fonction ft_lstlast pour trouver le dernier élément, puis en changeant   */
/*   le pointeur next du dernier élément pour le faire pointer vers le nouvel */
/*   élément.                                                                 */
/*                                                                            */
/* *****************************************************************   by.XVI */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	*lst = ft_lstlast(*lst);
	new->next = *lst;
}
