# Table des Matieres

* [Introduction](#chapitre-1--introduction)
* [Fonctions Abordees](#chapitre-2--les-fonctions-abordees)
* [Makefile](#chapitre-3--le-makefile)
* [Liens Utiles](#liens-utiles)
* [La Librairie](#chapitre-4--la-librairie-h)

- - -

# Chapitre 1 : Introduction
<br>
## Description de l'exercice

Le 1er chapitre du cursus 42, intitulé **Libft**, constitue une étape fondamentale dans l'apprentissage de la programmation en langage C. L'objectif principal de cet exercice est de créer une bibliothèque standard personnalisée, nommée **Libft**, qui comprendra un ensemble de fonctions couramment utilisées en programmation, mais sans utiliser les fonctions de la bibliothèque standard C comme celles présentes dans [\<string.h>](https://devdocs.io/c/string/byte) ou [\<stdlib.h>](https://devdocs.io/c/program).

Cette bibliothèque "libft" que vous allez construire devra être capable d'effectuer diverses opérations sur des chaînes de caractères, des tableaux, des listes chaînées, et d'autres structures de données. Elle servira de base pour de nombreux projets futurs au sein du cursus 42.

En résumé, cet exercice vise à développer les compétences suivantes :

* Maîtriser les bases du langage C.
* Comprendre en profondeur le fonctionnement des fonctions de la bibliothèque standard C.
* Créer des fonctions personnalisées pour effectuer des opérations courantes.
* Gérer la gestion dynamique de la mémoire.
* Utiliser Makefile pour automatiser la compilation.

<br>
## Objectif

*Au terme de ce Chapitre "Libft", les étudiants auront acquis un ensemble de compétences fondamentales en programmation en langage C. Voici les principales notions abordées et les compétences clés à maîtriser à la fin de ce chapitre :*

##### Les bases du langage C :

* Compréhension des types de données, des variables et des opérateurs.
* Utilisation des structures de contrôle (boucles et conditions).
* Manipulation des pointeurs et des adresses mémoire.

##### Gestion dynamique de la mémoire :

* Allocation et libération de la mémoire avec les fonctions malloc, free, et realloc.
* Compréhension de la fragmentation de la mémoire.

##### Manipulation des chaînes de caractères :

* Création de fonctions pour la manipulation de chaînes de caractères.
* Connaissance des opérations courantes sur les chaînes, telles que la concaténation, la recherche, la copie, etc.

##### Travail avec des tableaux et des listes chaînées :

* Création et manipulation de tableaux dynamiques.
* Mise en place de listes chaînées simples.

##### Utilisation d'un Makefile :

* Création de règles de compilation pour automatiser le processus de compilation de projets en C.
* Compilation de plusieurs fichiers source en une bibliothèque statique.

##### Maîtrise des fonctions de la bibliothèque standard C :

* Compréhension approfondie du fonctionnement des fonctions standard telles que write, read, open, close, etc.

##### Gestion d'erreurs et de cas particuliers :

* Traitement des erreurs de manière robuste.
* Gestion des cas limites pour garantir la fiabilité des fonctions.

##### Utilisation de la documentation :

* Apprentissage de la lecture de manuels de fonctions C pour comprendre leur utilisation et leurs prototypes.

<br>
<br>
- - -

# Chapitre 2 : Les fonctions abordees
<br>
## Index des Parties :

* [Fonctions de Base](#fonctions-de-base-manipulation-de-caract%C3%A8res-et-de-m%C3%A9moire) (Manipulation de Caractères et de Mémoire)
* [Fonctions de Gestion de la Mémoire](#fonctions-de-gestion-de-m%C3%A9moire-allocation-et-lib%C3%A9ration) (Allocation et Libération)
* [Fonctions de Manipulation de Chaînes de Caractères](#fonctions-de-manipulation-de-cha%C3%AEnes-de-caract%C3%A8res)
* [Fonctions de Liste Chaînée (Partie Bonus)](#fonctions-de-liste-cha%C3%AEn%C3%A9e-partie-bonus)

## Fonctions de Base (Manipulation de Caractères et de Mémoire) :

**isalpha** : Vérifie si le caractère passé en argument est une lettre alphabétique.

`int ft_isalpha(int c);`

<br>
**isdigit** : Vérifie si le caractère passé en argument est un chiffre décimal.

`int ft_isdigit(int c);`

<br>
**isalnum** : Vérifie si le caractère passé en argument est un caractère alphanumérique.

`int ft_isalnum(int c);`

<br>
**isascii** : Vérifie si le caractère passé en argument est un caractère ASCII.

`int ft_isascii(int c);`

<br>
**isprint** : Vérifie si le caractère passé en argument est un caractère imprimable.

`int ft_isprint(int c);`

<br>
**strlen** : Calcule la longueur d'une chaîne de caractères.

`size_t ft_strlen(const char *s);`

<br>
**memset** : Remplit une zone mémoire avec une valeur donnée.

`void *ft_memset(void *b, int c, size_t len);`

<br>
**bzero** : Remplit les premiers octets de la mémoire pointée par `s` avec l'octet nul (valeur 0).

`void ft_bzero(void *s, size_t n);`

<br>
**memcpy** : Copie une zone mémoire source dans une zone mémoire destination.

`void *ft_memcpy(void *dst, const void *src, size_t n);`

<br>
**memmove** : Copie une zone mémoire source dans une zone mémoire destination, même si elles se chevauchent.

`void *ft_memmove(void *dst, const void *src, size_t len);`

<br>
**strlcpy** : Copie une chaîne de caractères dans une autre en limitant la taille de destination.

`size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);`

<br>
**strlcat** : Concatène deux chaînes de caractères en limitant la taille du résultat.

`size_t ft_strlcat(char *dest, const char *src, size_t dstsize);`

<br>
**toupper** : Convertit un caractère minuscule en caractère majuscule si c'est une lettre minuscule.

`int ft_toupper(int c);`

<br>
**tolower** : Convertit un caractère majuscule en caractère minuscule si c'est une lettre majuscule.

`int ft_tolower(int c);`

<br>
**strchr** : Recherche la première occurrence d'un caractère dans une chaîne de caractères.

`char *ft_strchr(const char *s, int c);`

<br>
**strrchr** : Recherche la dernière occurrence d'un caractère dans une chaîne de caractères.

`char *ft_strrchr(const char *s, int c);`

<br>
**strncmp** : Compare les n premiers caractères de deux chaînes de caractères.

`int ft_strncmp(const char *s1, const char *s2, size_t n);`

<br>
**memchr** : Recherche une valeur dans une zone mémoire.

`void *ft_memchr(const void *s, int c, size_t n);`

<br>
**memcmp** : Compare les n premiers octets de deux zones mémoire.

`int ft_memcmp(const void *s1, const void *s2, size_t n);`

<br>
**strnstr** : Recherche une sous-chaîne dans une chaîne avec une limite de longueur.

`char *ft_strnstr(const char *haystack, const char *needle, size_t len);`

<br>
**atoi** : Convertit une chaîne de caractères en un entier.

`int ft_atoi(const char *str);`

<br>
<br>
<br>
## Fonctions de Gestion de Mémoire (Allocation et Libération) :

**calloc** : Alloue et initialise un bloc de mémoire à zéro.

`void *ft_calloc(size_t count, size_t size);`

<br>
**strdup** : Duplique une chaîne de caractères.

`char *ft_strdup(const char *s1);`

<br>
<br>
<br>
## Fonctions de Manipulation de Chaînes de Caractères :

**substr** : Extrait une sous-chaîne d'une chaîne de caractères.

`char *ft_substr(char const *s, unsigned int start, size_t len);`

<br>
**strjoin** : Concatène deux chaînes de caractères.

`char *ft_strjoin(char const *s1, char const *s2);`

<br>
**strtrim** : Supprime les caractères spécifiés en début et en fin d'une chaîne de caractères.

`char *ft_strtrim(char const *s1, char const *set);`

<br>
**split** : Divise une chaîne de caractères en mots en utilisant un caractère délimiteur.

`char **ft_split(char const *s, char c);`

<br>
**itoa** : Convertit un entier en chaîne de caractères.

`char *ft_itoa(int n);`

<br>
**strmapi** : Applique une fonction à chaque caractère d'une chaîne avec son index en argument.

`char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`

<br>
**striteri** : Applique une fonction à chaque caractère d'une chaîne avec son index en argument.

`void ft_striteri(char *s, void (*f)(unsigned int, char *));`

<br>
<br>
<br>
## Fonctions de Liste Chaînée (Partie Bonus) :

**lstnew** : Crée un nouvel élément de liste avec la donnée passée en argument.

`t_list *ft_lstnew(void *content);`

<br>
**lstadd\_front** : Ajoute un nouvel élément au début de la liste.

`void ft_lstadd_front(t_list **lst, t_list *new);`

<br>
**lstsize** : Calcule la taille de la liste en comptant le nombre d'éléments.

`int ft_lstsize(t_list *lst);`

<br>
**lstlast** : Renvoie un pointeur vers le dernier élément de la liste.

`t_list *ft_lstlast(t_list *lst);`

<br>
**lstadd\_back** : Ajoute un élément à la fin de la liste chaînée.

`void ft_lstadd_back(t_list **lst, t_list *new);`

<br>
**lstdelone** : Supprime un élément de la liste sans supprimer la structure de données qu'il contenait.

`void ft_lstdelone(t_list *lst, void (*del)(void *));`

<br>
**lstclear** : Supprime et libère la mémoire de tous les éléments de la liste en utilisant une fonction de suppression.

`void ft_lstclear(t_list **lst, void (*del)(void *));`

<br>
<br>
<br>
- - -

# Chapitre 3 : Le Makefile

## Gestion Facilitée de la Bibliothèque

> *Pour faciliter la compilation, la gestion et l'utilisation de cette bibliothèque, le Makefile est un outil essentiel.*
> 
> *Dans cette rubrique, nous explorerons en détail le Makefile du projet "libft". Nous découvrirons les différentes règles qu'il contient et comment elles simplifient la création, la gestion et la maintenance de la bibliothèque. Le Makefile permet non seulement de compiler la bibliothèque, mais également de nettoyer les fichiers temporaires, de reconstruire la bibliothèque en cas de besoin, et même de gérer des fonctionnalités bonus.*
> 
> *Que vous débutiez dans le projet "libft" ou que vous souhaitiez approfondir vos connaissances sur la gestion de bibliothèques en C, cette rubrique vous guidera à travers les règles clés du Makefile et leur fonctionnement. Elle vous fournira également les outils nécessaires pour travailler efficacement avec votre bibliothèque "libft" tout au long de votre parcours au cursus 42.*

<br>
<br>
`$(NAME)`

Cette règle génère la bibliothèque statique libft.a, qui contiendra toutes les fonctions de la librairie. Elle est créée en utilisant la commande `ar -rcs`, qui rassemble tous les fichiers objets (.o) en un fichier de bibliothèque. Les fichiers objets nécessaires sont spécifiés après `$(NAME)`.

<br>
`all`

Cible par défaut du Makefile. Lorsque vous exécutez simplement `make`, elle appelle la règle `$(NAME)` pour créer la bibliothèque libft.a.

<br>
`clean`

Supprime tous les fichiers objets (.o) générés lors de la compilation. Cela nettoie le répertoire du projet des fichiers temporaires.

<br>
`fclean`

Supprime tous les fichiers générés lors de la compilation, y compris la bibliothèque libft.a. Elle appelle également la règle `clean`pour supprimer les fichiers objets. En conséquence, `fclean` effectue un nettoyage complet du projet.

<br>
`re`

Cette règle est une combinaison de `fclean` suivi de `all`. Elle supprime d'abord tous les fichiers générés, puis recompile la librairie à partir de zéro en appelant `all`. C'est utile lorsque vous souhaitez reconstruire la librairie depuis le début.

<br>
`bonus`

Cette règle permet de compiler les fonctions bonus de la librairie. Elle crée une bibliothèque libft.a contenant toutes les fonctions (y compris les bonus) en utilisant les fichiers objets correspondants.
<br>
> Ces règles sont essentielles pour la gestion de votre projet, notamment pour la compilation, la création de la bibliothèque et le nettoyage du répertoire de travail. Vous pouvez les invoquer en utilisant la commande make suivie du nom de la règle (par exemple, `make all`, `make clean`, `make re`, etc.).

- - -

# Chapitre 4 : La Librairie .h

**Le fichier d'en-tête (.h) joue un rôle crucial pour définir l'interface de votre bibliothèque. Voici comment une bibliothèque .h fonctionne et les principes clés à prendre en compte :**

## Inclusions Initiales :

Au début du fichier d'en-tête, vous devez inclure les bibliothèques standard nécessaires pour vos fonctions. Dans le cas de "libft", cela comprend généralement des inclusions telles que :

```
#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
#include <string.h>
```

Ces directives de préprocesseur garantissent que le fichier d'en-tête est inclus une seule fois, même si plusieurs fichiers sources l'incluent.

## Définition des Structures :

Si votre bibliothèque utilise des structures personnalisées, déclarez-les dans le fichier d'en-tête. Par exemple, dans "libft", la structure `t_list` est utilisée pour gérer les listes chaînées.

## Prototypes des Fonctions :

Les prototypes des fonctions sont essentiels. Vous devez les inclure dans le fichier d'en-tête au fur et à mesure que vous implémentez de nouvelles fonctions. Ces prototypes indiquent aux utilisateurs comment utiliser vos fonctions, y compris les types d'arguments attendus et les valeurs de retour.
Par exemple :

```
int ft_strlen(const char *s);
void *ft_memset(void *b, int c, size_t len);
char *ft_strdup(const char *s1);
// ... et ainsi de suite pour chaque fonction
```

## Mise à Jour Régulière :

Chaque fois que vous ajoutez ou modifiez une fonction dans votre bibliothèque, assurez-vous de mettre à jour le fichier d'en-tête en conséquence. Cela garantit que les utilisateurs ont accès aux dernières définitions et prototypes.

## Utilisation de Commentaires :

Commentez vos prototypes de fonctions pour expliquer brièvement ce que fait chaque fonction. Les commentaires aident les utilisateurs à comprendre rapidement l'objectif de chaque fonction.

*En suivant ces principes, vous construisez progressivement votre fichier d'en-tête tout au long du développement de votre bibliothèque "libft". Cela garantit que votre bibliothèque est bien documentée et facile à utiliser pour d'autres projets futurs.*

- - -

# Liens utiles

## Liens Github

[Norminette 42](https://github.com/42School/norminette)
Norminette 42 pour le Terminal.

[Francinette](https://github.com/xicodomingues/francinette)
Programme de differents tests des modules du Cursus 42.
<br>
## Extensions VSCode

[42\_ft\_line\_counter](https://marketplace.visualstudio.com/items?itemName=DoKca.42-ft-count-line)
Compteur de lignes par fonction (utile pour la Norminette).

[42\_header](https://marketplace.visualstudio.com/items?itemName=kube.42header)
Header de l'ecole 42.

[Norminette 42](https://marketplace.visualstudio.com/items?itemName=dalexhd.42-norminette)
Norminette non-officielle pour VSCode.
<br>
# Conclusion

Le projet "libft" du cursus 42 est un excellent moyen d'améliorer vos compétences en programmation en C et de comprendre les bases de la création d'une bibliothèque. Voici quelques conseils pour vous aider à réussir ce projet :

##### Comprenez l'Énoncé

Avant de commencer, prenez le temps de bien comprendre l'énoncé du projet. Assurez-vous de connaître les objectifs et les attentes de chaque partie du projet.

##### Organisez Votre Travail

Divisez le projet en étapes plus petites et organisez-vous. Créez un plan de travail pour vous assurer de ne rien oublier et de suivre une progression régulière.

##### Documentez Votre Code

Une documentation claire et concise est essentielle. Commentez vos fonctions de manière à ce que leur utilisation soit facilement compréhensible par d'autres développeurs.

##### Testez Rigoureusement

Écrivez des tests unitaires pour chaque fonction que vous implémentez. Cela vous permettra de vous assurer que vos fonctions fonctionnent correctement et de détecter rapidement les erreurs.

##### Respectez les Normes

Suivez strictement les normes de programmation de la 42. Veillez à respecter les conventions de nommage, les règles de formatage du code, et à éviter les fuites de mémoire.

##### Utilisez Git

Utilisez Git pour gérer votre code source. Commitez régulièrement et assurez-vous de conserver un historique propre de vos modifications.

##### Demandez de l'Aide

Avant tout : **RTFM** !
Puis, n'hésitez pas à demander de l'aide à vos airs, à des tuteurs ou à la communauté en ligne de la 42 si vous rencontrez des difficultés. C'est une excellente ressource pour résoudre des problèmes.

##### Restez Organisé

Gardez une structure de répertoire propre et organisée pour votre projet. Cela facilitera la gestion des fichiers et le suivi de votre progression.

##### Soyez Patient

Le projet "libft" peut être complexe, surtout si c'est votre première expérience avec la création d'une bibliothèque. Soyez patient avec vous-même et prenez le temps de comprendre chaque concept.

##### Apprenez de Vos Erreurs

Ne craignez pas de faire des erreurs, car elles sont une occasion d'apprendre. Analysez les erreurs que vous rencontrez et cherchez à les corriger.

<br>
<br>
**En suivant ces conseils pratiques, vous serez bien équipé pour réussir le projet "libft" et acquérir des compétences précieuses en programmation en C. N'oubliez pas que la persévérance est la clé de la réussite, alors restez motivé et continuez à progresser dans votre apprentissage.**