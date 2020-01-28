# Question 3
## Pile d'exécution

```
        | ------------- |
        | ############# | Variables locales de la fonction qui appelle test
        | ------------- |
test    | ch2 "salut"   | params
        | ------------- |
        | ch1 "Hello"   | params
        | ------------- |
pile    | elem          |
        | [H|..|..]     |
        |  ^            |
        | p_libre       |
        | ------------- |
push    | ch1 "Hello"   | param - Recopie la chaine de caractère dans *p_libre (H) 
        | ------------- |
assert  |               | assert(!full()) : Le compilateur créee une variable locale temporaire pour 
        |               |                   stocker le résultat de l'appel de la méthode full
full    | false|false   | résultat bool
        | ------------- |


        | ------------- |
assert  | true          | param de assert
        |               | var locals de assert (il se peut qu'elle ait des vars locales..)
        | ------------- |

Pour chaque fonction, une pile est formée de cette manière :
        | ------------- |
        | Résultat      | On réserve de la place pour le résultat de la fonction, de taille connue grâce au type
        | ------------- |
        | Paramètres    | Les paramètres d'entrée de la fonction sont copiés dans cet espace
        | ------------- |
        | Variables loc.| Éventuellement, des variables locales intrinsèques à la fonction
        | ------------- |

Quand une instruction est terminée, le compilateur dépile et écrit par dessus le bloc maintenant inutilisé
```