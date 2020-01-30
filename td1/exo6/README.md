```
            Pile d'exécution
            | ################# |
            | ----------------- |
test        | ch2 Salut         |
            | ----------------- |
            | ch1 hello         |
            | ----------------- |
            | pelem (ptr)       |
            | plibre (ptr)      |
            | capacite = 327    |
            | ----------------- |


            Tas (tableau)
            | (pelem) (plibre)  |
            | ----------------- |
            |                   |
            |       ...         |
            |                   |
            | ----------------- |

            Pile d'exécution
            | ################# |
            | ----------------- |
test        | ch2 Salut         |
            | ----------------- |
            | ch1 hello         |
            | ----------------- |
            | pelem (ptr)       |
            | plibre (ptr)      |
            | capacite = 327    |
            | ----------------- |
push        | ch hello          |


            Tas (tableau)
            | (pelem) hello     |
            | ----------------- |
            | (plibre)          |
            |       ...         |
            |                   |
            | ----------------- |

            Pile d'exécution
            | ################# |
            | ----------------- |
test        | ch2 Salut         |
            | ----------------- |
            | ch1 hello         |
            | ----------------- |
            | pelem (ptr)       |
            | plibre (ptr)      |
            | capacite = 327    |
            | ----------------- |
push        | ch salut          | 

-> Une première copie est faite dans la pile d'exécution (1er appel constructeur de copie) Une seconde copie (2e appel de constructeur de copie) sera faite lors de l'écriture dans le Tas (tableau)
                            

            Tas (tableau)
            | (pelem) hello     |
            | ----------------- |
            | salut             |
            | ----------------- |
            | (plibre)          |
            |       ...         |
            |                   |
            | ----------------- |

            Pile d'exécution
            A ce stade les deux emplacements mémoire alloués au push dans la pile principale sont supprimés.
            | ################# |
            | ----------------- |
test        | ch2 Salut         |
            | ----------------- |
            | ch1 hello         |
            | ----------------- |
            | pelem (ptr)       |
            | plibre (ptr)      |
            | capacite = 327    |
            | ----------------- |
            | tmp salut         | Nécessaire pour `pile->top() == ""` pile->top() est stocké dans une var temporaire gerée par le compilateur. Utilisé également dans cout<<pile->top() (2x)
            | ----------------- |
top         | res salut         | Copie de salut (du tas vers la pile d'exécution), appel du constructeur de copie


```
Un passage de paramètre par valeur appelle le constructeur de copie  

Lorsque la fonction test se terminé, le destructeur de pile est appelé, il libère ce tableau, son instance est liberée. Enfin le compilateur libère ch1 et ch2.