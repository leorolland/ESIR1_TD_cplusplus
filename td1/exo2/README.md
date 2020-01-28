# Question 2
Les potentielles erreurs proviennent du mot clé **new** qui implique de devoir delete.
On remplace donc `Pile * pile = new Pile;` par `Pile pile;`.
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