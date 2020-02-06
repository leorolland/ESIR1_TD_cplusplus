# Question 8
Chaque élément de la pile possède un pointeur vers l'élément précédent de la pile (chaînage) 
Un chaînon est formé de (Valeur, Pointeur)

On va créer une chaîne interne à la classe Pile "Chaînon".
```
         | (Chainon vide) |     ?
                                | nullptr
         | Chainon        |  <-- 
                                | m_precedent : pointeur vers le Chaînon précédent
sommet-> | Chainon        |  ---
```

Quand on a une classe où tout est public, on peut remplacer le mot clé **class** par **struct**.

## Mémoire
delete ptr - Supprime l'objet désigné par le pointeur
