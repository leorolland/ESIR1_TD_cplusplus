```
main            | ch1 Hello             |
                | ch2 Salut             |
                | --------------------- |
test            | ch2 (ref vers Salut)  | 
                | --------------------- |
                | ch1                   |
                | --------------------- |
                | pile: pelem (ptr)     |
                | plibre (ptr)          |
                | capacite              |
                | --------------------- |
                | tmp                   |
                | --------------------- |
push            | ch (ref vers Hello)   |
                | --------------------- | à présent la seule copie de chaîne se fait lors de l'écriture dans le Tas (tableau)
                ...
                top renvoie également une référence qui désigne un élément de la pile

```