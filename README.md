*This project has been created as part of the 42 curriculum by evanchoq*

# ft_print - Le printf maison fait a 42 Le Havre

## Description

Le projet **ft_printf** est le deuxieme projet du cursus de l'école 42, l'objectif est de recree la fonction printf
en urilisant va_*

stdarg permet de utiliser sur des fonction ou le ou les parametre sont dynamique.

## Instructions d'installation et de compilation

### Prérequis
* Un compilateur C (`gcc` ou `clang`)
* La commande `make`

### Compilation
Pour compiler la bibliothèque obligatoire :
```bash
make
```
Ceci générera l'archive statique `libftprintf.a` à la racine du dépôt.

### Autres règles du Makefile
* `make clean` : Supprime tous les fichiers objets (`.o`).
* `make fclean` : Supprime les fichiers objets et l'archive `libft.a`.
* `make re` : Recompile entièrement le projet (`fclean` puis `all`).

### Utilisation dans un projet

1. Incluez le header dans votre code C :
```c
#include "ft_printf"
```
2. Compiler votre programme en liant `libft.a` et `libftprintf.a`
```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -L libft -lft -I include -o prog
```
---

## Ressources et Utilisation de l'IA

### Ressources de référence
* Man pages de Linux (`man 3 strlen`, `man 3 malloc`, etc.)
* Standard C Library documentation : man [fonction]

### Usage de l'IA dans ce projet
Conformément aux directives pédagogiques de l'école 42 :
* **Usage de l'IA :** Utiliser pour comprendre les sujet et traduire le sujet, mon niveau en anglais est moyen et aussi des aide pour certaine fonction et il m'a aider pour le README.md
