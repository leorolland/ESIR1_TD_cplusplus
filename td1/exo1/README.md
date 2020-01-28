# TD1 

## Fichier header (.h)
On peut y déclarer plusieurs classes.

Mode de passage de la méthode test : par valeur

## Question 1
On a fait une allocation dynamique pour pile : on doit donc faire un delete !
On ajoute donc un `delete pile;` à la fin (prenant en paramètre un pointeur)

## Question 2
On évite l'allocation dynamique pour simplifier.
```c++
void test(...) {
    Pile pile;
    pile.push(ch1);
    pile.push(ch2);
    if (pile.top() == "") { return; }
    pile.pop()
}
```
Avantage de l'allocation dynamique : On peut définir sa capacité plus tard 
- au moment de l'allocation
- capacité non connue lors de la compilation
- on peut le détruire quand on veut

## Question 3
**REMARQUE** : Déclarer une propriété dans le corps du constructeur ne marche que pour les types primitifs non constants.

On n'a pas fait de new => Pas besoin de delete