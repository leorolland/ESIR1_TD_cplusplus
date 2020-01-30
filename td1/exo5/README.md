# Question 5
Un pointeur pointant vers le premier element du tableau peut également être utilisé comme l'identificateur du tableau. On peut donc lui indiquer un indice.

Soit `pelem` un pointeur vers le 1er élément
```c++
pelem[0] // <=> pelem
&pelem[capacite] // <=> pelem + capacite (adresse hors tableau)
```

## Destructeur
En fin de vie de l'instance, appel du destructeur, puis réelle destruction en mémoire

## Destruction de tableau
`delete[] monTableau`
En deux étapes
- Appel du destructeur de chaque élément du tableau
- Desctruction du tableau

# Libération des ressources 
Si allocation, alors désallocation
Importance de l'implémenter dans le destructeur, par exemple pour : mémoire, fichier, port réseau, connexion

# Remarque
`delete pelem` (en oubliant les []) appelle le destructeur du premier élément mais désalloue bien tout le tableau