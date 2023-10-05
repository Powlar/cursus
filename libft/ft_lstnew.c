/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:47:20 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/05 15:35:00 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*   Fonctionnement : Crée un nouvel élément de liste avec la donnée passée   */
/*   en argument.                                                             */
/*                                                                            */
/*   Paramètres :                                                             */
/*      - content : La donnée à stocker dans le nouvel élément de liste.      */
/*                                                                            */
/*   Retour :                                                                 */
/*      - Un pointeur vers le nouvel élément de liste créé.                   */
/*      - NULL en cas d'échec d'allocation de mémoire.                        */
/*                                                                            */
/*   Si échec :                                                               */
/*      La fonction renvoie NULL en cas d'échec d'allocation de mémoire.      */
/*                                                                            */
/* *****************************************************************   by.XVI */
t_list	*ft_lstnew(void *content)
{
	t_list	*new_lst;

	new_lst = (t_list *) malloc(sizeof(t_list));
	if (!new_lst)
		return (NULL);
	new_lst->content = content;
	new_lst->next = NULL;
	return (new_lst);
}
