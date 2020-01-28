// constructeur
// On peut aussi écrire caseLibre(elements)  
Pile::Pile(): 
pLibre(&elements[0]) // ou pLibre(elements)
{

}

/**
 * Push
 * @pre !full
 */
void Pile::push(std::string valeur) {
    assert(!full());
    *pLibre = valeur;
    ++pLibre;
}
bool Pile::empty() const {
    return pLibre == &elements[0];
}
bool Pile::full() const {
    return pLibre == &elements[9];
}
void Pile::pop() {
    --pLibre;
}

/**
 * @pre !empty
 */
std::string Pile::top() const {
    return *(pLibre - 1);
}