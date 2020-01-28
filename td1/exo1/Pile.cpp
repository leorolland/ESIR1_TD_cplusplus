// constructeur
Pile::Pile(): 
sommet(-1) 
{

}

/**
 * Push
 * @pre !full
 */
void Pile::push(std::string valeur) {
    assert(!full());
    elements[++sommet] = valeur;
}
bool Pile::empty() const {
    return sommet == -1;
}
bool Pile::full() const {
    return sommet == 9;
}
void Pile::pop() {
    --sommet;
}

/**
 * @pre !empty
 */
std::string Pile::top() const {
    return elements[sommet];
}