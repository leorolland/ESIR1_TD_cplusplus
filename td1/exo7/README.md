# Question 7
Comment éviter le passage de paramètre et le renvoi de résultat par valeur (donc des copies d'instance dont appel au constructeur de copie) ?
-> Utiliser un pointeur ou une référence

Différence :
- Une référence est constante, on ne peut pas la modifier, elle ne peut désigner que l'objet qu'elle désigne
- Syntaxiquement, la référence utilise une syntaxe plus légère
- Dans les deux cas, on transmet une adresse
- Même mécanisme, changements syntaxiques

Param par valeur et résultat par valeur > Param et résultat par référence
**Ne change pas la syntaxe d'appel et d'utilisation de la fonction pour le programmeur client.**

On garde plutot les pointeurs quand on fait de l'allocation dynamique.

```c++
main
std::string ch1(...);
std::string ch2(...);
    test(ch1, ch2)

void test(const std:string & ch1, const std:string & ch2) {
    ...
    ch1 = ch1 + "fdfd" 
    // Maintenant impossible car bloqué grâce au const.
    // Effet recherché, car anciennement lors du passage par valeur (copie),
    // on pouvait travailler avec ch1 et ch2 sans affecter les valeurs de ch1 et ch2
    // en dehors de cette fonction. A cause des références, une telle modification
    // entrainerait un effet de bord. On précise donc impérativement const
    // pour empêcher a test de modifier les données d'entrée
    ...
}
```

## Pointeurs, référence, syntaxe
Syntaxiquement, un pointeur est initialisé avec une adresse/pointeur
Syntaxiquement, une référence est initialisé par une variable/référence/objet/instance

# Pointeur
```c++
T x;
T * p1 = &x; // ou T * p1(&x);
T * p2 = p1;
````

# Référence
```c++
// T & r1;
T & r1(x) // ou
T & r1 = x;
T & r2(r1);
```

## Tableau de références 
Une référence ne peut pas être modifiée, alors le seul moyen que cela fonctionne serait d'initialiser tout le tableau dès le début. 
Le tableau de pointeurs est plus adapté.