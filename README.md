#FT PRINTF

####Projet pedagogique

Objet: reproduire les applications principales de la fonction PRINTF

Specifications:

Cette version egalise, voir rivalise avec la vitesse de la fonction originale
pour l'affichage des nombres entiers.
Elle a ete pense dans l'economie de la memoire, d'operations et avant tout
d'appels systemes.

Le sujet du projet se trouve a la racine du depot,
en bonus ont ete rajoute

- la conversion binaire
affiche le parametre donne en binaire.

le flag # separe par 4.
la precision remplie des groupes de 4. (precision * 4)

- la fonction dprintf aussi inclue dans la librairie.
a le meme comportement que printf, en specifiant en parametre le file descriptor
dans lequel ecrire.

- wildcard
le flag *

fait office de minimum field width,
on passe alors en parametre la mfw avant le parametre a convertir.


toutes les fonctions sont retrouvables dans la libft
