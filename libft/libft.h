/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:32:36 by cedmulle          #+#    #+#             */
/*   Updated: 2023/10/04 11:32:07 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*****************************************************************************/
/* 									Definitions								 */
/*****************************************************************************/
#ifndef LIBFT_H
# define LIBFT_H
/*****************************************************************************/
/* 							Libraries std necessaires						 */
/*****************************************************************************/
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
/*****************************************************************************/
/* 								Fonctions seules							 */
/*****************************************************************************/
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
/*****************************************************************************/
/* 								Fonctions malloc							 */
/*****************************************************************************/
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
/*****************************************************************************/
/* 							Fonctions supplementaires						 */
/*****************************************************************************/
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif

/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_atoi                                                   */
/*   Fonctionnement : Convertit une chaîne de caractères en int.              */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_bzero                                                  */
/*   Fonctionnement : Remplit les n premiers octets de la mémoire pointée par */
/*   s avec l'octet nul (valeur 0).                                           */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_calloc                                                 */
/*   Fonctionnement : Alloue et initialise un bloc de mémoire à zéro.         */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_isalnum                                                */
/*   Fonctionnement : Vérifie si le caractère passé en argument est un        */
/*   caractère alphanumérique.                                                */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_isalpha                                                */
/*   Fonctionnement : Vérifie si le caractère passé en argument est une lettre*/
/*   alphabétique.                                                            */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_isascii                                                */
/*   Fonctionnement : Vérifie si le caractère passé en argument est un        */
/*   caractère ASCII.                                                         */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_isdigit                                                */
/*   Fonctionnement : Vérifie si le caractère passé en argument est un        */
/*   chiffre décimal.                                                         */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_isprint                                                */
/*   Fonctionnement : Vérifie si le caractère passé en argument est un        */
/*   caractère imprimable.                                                    */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_itoa                                                   */
/*   Fonctionnement : Convertit un int en chaîne de caractères.               */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_memchr                                                 */
/*   Fonctionnement : Recherche une valeur dans une zone mémoire.             */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_memcmp                                                 */
/*   Fonctionnement : Compare les n premiers octets de deux zones mémoire.    */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_memcpy                                                 */
/*   Fonctionnement : Copie une zone mémoire source dans une zone mémoire     */
/*   destination.                                                             */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_memmove                                                */
/*   Fonctionnement : Copie une zone mémoire source dans une zone mémoire     */
/*   destination, même si elles se chevauchent.                               */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_memset                                                 */
/*   Fonctionnement : Remplit une zone mémoire avec une valeur donnée.        */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_putchar_fd                                             */
/*   Fonctionnement : Écrit un caractère dans un descripteur de fichier.      */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_putendl_fd                                             */
/*   Fonctionnement : Écrit une chaîne de caractères suivie d'un saut de ligne*/
/*   dans un descripteur de fichier.                                          */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_putnbr_fd                                              */
/*   Fonctionnement : Écrit un entier dans un descripteur de fichier.         */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_putstr_fd                                              */
/*   Fonctionnement : Écrit une chaîne de caractères dans un descripteur de   */
/*   fichier.                                                                 */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_split                                                  */
/*   Fonctionnement : Divise une chaîne de caractères en mots en utilisant un */
/*   caractère délimiteur.                                                    */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_strchr                                                 */
/*   Fonctionnement : Recherche la première occurrence d'un caractère dans une*/
/*   chaîne de caractères.                                                    */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_strdup                                                 */
/*   Fonctionnement : Duplique une chaîne de caractères.                      */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_striteri                                               */
/*   Fonctionnement : Applique une fonction à chaque caractère d'une chaîne   */
/*   avec son index en argument.                                              */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_strjoin                                                */
/*   Fonctionnement : Concatène deux chaînes de caractères.                   */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_strlcat                                                */
/*   Fonctionnement : Concatène deux chaînes de caractères en limitant la     */
/*   taille du résultat.                                                      */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_strlcpy                                                */
/*   Fonctionnement : Copie une chaîne de caractères dans une autre en        */
/*   limitant la taille de destination.                                       */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_strlen                                                 */
/*   Fonctionnement : Calcule la longueur d'une chaîne de caractères.         */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_strmapi                                                */
/*   Fonctionnement : Applique une fonction à chaque caractère d'une chaîne   */
/*   avec son index en argument, puis renvoie une nouvelle chaîne.            */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_strncmp                                                */
/*   Fonctionnement : Compare les n premiers caractères de deux chaînes de    */
/*   caractères.                                                              */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_strnstr                                                */
/*   Fonctionnement : Recherche une sous-chaîne dans une chaîne avec une      */
/*   limite de longueur.                                                      */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_strrchr                                                */
/*   Fonctionnement : Recherche la dernière occurrence d'un caractère dans    */
/*   une chaîne de caractères.                                                */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_strtrim                                                */
/*   Fonctionnement : Supprime les caractères spécifiés en début et en fin d' */
/*   une chaîne de caractères.                                                */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_substr                                                 */
/*   Fonctionnement : Extrait une sous-chaîne d'une chaîne de caractères.     */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_tolower                                                */
/*   Fonctionnement : Convertit un caractère minuscule en caractère majuscule */
/*   si c'est une lettre minuscule.                                           */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   Nom de la Ft : ft_toupper                                                */
/*   Fonctionnement : Convertit un caractère majuscule en caractère minuscule */
/*   si c'est une lettre majuscule.                                           */
/*                                                                            */
/* ************************************************************************** */