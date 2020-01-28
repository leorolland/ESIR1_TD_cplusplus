
class Pile {
    public:
        Pile();
        void push(std::string valeur);
        void pop();
        std::string top() const;
        bool empty() const;
        bool full() const;
        ~Pile();
    private:
        std::string * caseLibre; // pointeur sommet
        std::string elements[10];
};