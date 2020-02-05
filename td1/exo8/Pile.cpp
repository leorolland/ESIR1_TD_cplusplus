#include "Pile.hpp"

Pile::Chainon::Chainon(const std::string & valeur, Chainon * prec)
:m_valeur(valeur), m_precedent(prec)
{};
Pile::Chainon::~Chainon() {}

Pile::Pile()
:m_sommet(nullptr) {}

/**
 * @pre !full()
 */
void Pile::push(const std::string & valeur) {
    // Attention, on crée une variable locale qui n'éxiste plus
    // Lorsque cette méthode se termine, la var locale disparait
    // et le pointeur pointe vers quelque chose d'inexistant
    // On utiilise donc l'allocation dynamique
    m_sommet = new Chainon(valeur, m_sommet);
}
const std::string & Pile::top() const {
    return (*m_sommet).m_valeur;
    // ou m_sommet->m_valeur
}
/**
 * @pre !empty()
 */
void Pile::pop() {
    Chainon * tmp = (*m_sommet).m_precedent;
    delete m_sommet;
    m_sommet = tmp;
}
bool Pile::empty() const {
    return m_sommet == nullptr;
}
bool Pile::full() const {
    return false;
}
Pile::~Pile() {
    while(!empty) {
        pop();
    }
}