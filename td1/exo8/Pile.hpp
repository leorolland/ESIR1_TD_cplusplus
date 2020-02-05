#include <string>

class Pile {
    private:
        /**
         * Classe interne à la classe Pile : Chaînon
         * La déclaration de cette classe est innaccessible en dehors de la classe Pile car elle est décrite dans la partie privée.
         * Si on l'avait mis au dessus, elle aurait été accessible de l'extérieur.
         */
        class Chainon { // ou "struct Chainon"
            public: // La classe Pile à accès à ces attributs mais aucune classe extérieure
                std::string m_valeur;
                Chainon * m_precedent;
                Chainon(const std::string & valeur, Chainon * prec = nullptr);
                ~Chainon();
        };
    public:
        Pile();
        void push(const std::string & valeur);
        const std::string & top() const;
        void pop();
        bool empty() const;
        bool full() const;
        ~Pile();
    private:
        Chainon * m_sommet;
};