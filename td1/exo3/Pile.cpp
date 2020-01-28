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
    return pLibre == elements;
}
bool Pile::full() const {
    return pLibre == &elements[9]; // équivalent elem+10
}
void Pile::pop() {
    --pLibre;
}
int Pile::size() {
    return pLibre - elem;
}


/**
 * @pre !empty
 */
std::string Pile::top() const {
    return *(pLibre - 1);
}