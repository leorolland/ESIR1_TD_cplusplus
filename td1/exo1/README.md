# Question 1

## Fichier header (.h)
On peut y déclarer plusieurs classes.
Mode de passage de la méthode test : par valeur

## Réponse à la question
On a fait une allocation dynamique pour pile : **on doit donc faire un delete** !
On ajoute donc un `delete pile;` à la fin (prenant en paramètre un pointeur)

Avantage de l'allocation dynamique : On peut définir sa capacité plus tard 
- au moment de l'allocation
- capacité non connue lors de la compilation
- on peut le détruire quand on veut