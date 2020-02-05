#include "Pile.hpp"

// constructeur
// On peut aussi écrire caseLibre(elements)  
Pile::Pile(const unsigned int capa): // A faire dans le même ordre que le header
pelem(new std::string[capa]),
capacite(capa),
pLibre(pelem)
{
}

/**
 * Push
 * @pre !full
 */
void Pile::push(const std::string & valeur) {
    assert(!full());
    *pLibre = valeur;
    ++pLibre;
}
void Pile::pop() {
    --pLibre;
}
/**
 * @pre !empty
 */
const std::string & Pile::top() const {
    return *(pLibre - 1);
}
bool Pile::empty() const {
    return pLibre == pelem;
}
bool Pile::full() const {
    return pLibre == pelem+capacite;
    // ou plibre == &pelem[capacite]
}
Pile::~Pile() {
    delete[] pelem; // Important pour désallouer la mémoire du tableau alloué dynamiquement.
}
