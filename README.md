# Libft42

Libft est un projet de programmation informatique développé dans le cadre de l'école 42. Il s'agit d'une bibliothèque de fonctions en C qui recrée certaines fonctions de la bibliothèque standard, ainsi que d'autres fonctions utiles pour le développement de programmes.

### Installation

Pour installer la bibliothèque Libft, vous devez d'abord cloner le dépôt GitHub sur votre machine locale :

````bash
git clone https://github.com/vamoussa00225/libft.git
````

Ensuite, vous devez vous rendre dans le répertoire libft et exécuter la commande make pour compiler la bibliothèque :

````bash
cd libft
make
````

La bibliothèque sera alors compilée et prête à être utilisée.

### Utilisation

Pour utiliser la bibliothèque Libft, vous devez inclure le fichier d'en-tête libft.h dans votre programme C, et lier votre programme à la bibliothèque libft.a.

La bibliothèque contient des fonctions pour les chaînes de caractères, les tableaux, les listes chaînées, les nombres, les caractères, etc. Voici quelques exemples d'utilisations :

````c
#include "libft.h"

int main(void)
{
    char *str = "Hello, world!";
    int n = ft_strlen(str);
    char *copy = ft_strdup(str);
    
    printf("La chaîne \"%s\" fait %d caractères.\n", str, n);
    printf("La copie de la chaîne est \"%s\".\n", copy);
    
    free(copy);
    
    return (0);
}
````

La sortie de ce programme sera :

````perl
La chaîne "Hello, world!" fait 13 caractères.
La copie de la chaîne est "Hello, world!".
````

### Auteurs

Ce programme a été développé par "Vkanate" dans le cadre du projet Libft de l'école 42.
