#include <string>

class Pile {
    public:
        Pile(const unsigned int capa=10); // Valeur par défaut à ne pas recopier dans l'implémentation
        void push(std::string valeur);
        void pop();
        std::string top() const;
        bool empty() const;
        bool full() const;
        ~Pile();
    private:
        std::string * const pelem; // On n'est pas censé changer ce pointeur après initialisation
        // Lire "pelem est un constant pointeur vers une chaine"
        const unsigned int capacite;
        std::string * pLibre; // pointeur sommet
};