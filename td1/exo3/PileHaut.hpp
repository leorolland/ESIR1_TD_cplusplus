#include <string>

class PileHaut {
    public:
        PileHaut();
        void push(std::string valeur);
        void pop();
        std::string top() const;
        bool empty() const;
        bool full() const;
        ~PileHaut();
    private:
        std::string * caseLibre; // pointeur sommet
        std::string elements[10];
};