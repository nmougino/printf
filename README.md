#FT PRINTF

Le commit de refonte l'a rendu compilable via Weverything, comme j'avais un rhume et franchement pas envie de reprendre tout le printf, je l'ai refait en dur en corrigeant erreur par erreur. Ce n'est donc pas le printf le plus optimise du monde, je m'en rend compte des mois plus tard grace a tout ce que j'ai appris entre temps.

####Projet pedagogique

###Objet: reproduire les applications principales de la fonction PRINTF

Cette version a ete pense en terme d'efficacite, de rapidite et de minimisation
a l'extreme des appels systemes.
Aucun mallocs, 3 writes ecrits dans l'ensemble du projet.

Le sujet du projet se trouve a la racine du depot,
en bonus ont ete rajoutes:

- dprintf
meme comportement que printf,
en specifiant en parametre le file descriptor dans lequel ecrire.
Utile dans le cas de traitements de fichiers.

- la conversion binaire
affiche le parametre fournit au format binaire.
le flag # separe des groupes de 4 bits.
la precision remplie des groupes de 4 (precision * 4) et les separes


- wildcard - le flag *
fait office de minimum field width,
on passe alors en parametre la mfw avant le parametre a convertir,
tres utile pour le projet ft_ls.

- En outre cette librairie est aussi rapide que le printf original en ce qui
concerne l'affichage des int.
