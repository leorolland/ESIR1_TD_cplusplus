// constructeur
// On peut aussi écrire caseLibre(elements)  
PileHaut::PileHaut(): 
p_sommet(elements-1) // ou pLibre(elements)
{

}

/**
 * Push
 * @pre !full
 */
void Pile::push(std::string valeur) {
    assert(!full());
    ++p_sommet;
    *p_sommet = valeur;
}
bool Pile::empty() const {
    return p_sommet == elements-1;
}
bool Pile::full() const {
    return p_sommet == elem+9;
}
void Pile::pop() {
    --p_sommet;
}
int Pile::size() {
    return pLibre - elements + 1;
}
/**
 * @pre !empty
 */
std::string Pile::top() const {
    return *p_sommet;
}