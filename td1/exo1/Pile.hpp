
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
        int sommet; // indice du sommet
        std::string elements[10];
};