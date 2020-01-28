// constructeur
// On peut aussi écrire caseLibre(elements)  
Pile::Pile(const unsigned int capa): // A faire dans le même ordre que le header
pelem(new std::string[capa]),
capacite(capa),
plibre(pelem)
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
    return pLibre == elements;
}
bool Pile::full() const {
    return pLibre == elements+10;
}
void Pile::pop() {
    --pLibre;
}
int Pile::size() {
    return pLibre - elements;
}


/**
 * @pre !empty
 */
std::string Pile::top() const {
    return *(pLibre - 1);
}