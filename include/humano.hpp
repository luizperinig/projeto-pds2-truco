#include "player.hpp"
class Humano : public Player {
    private:
        std::string _nome;

    public:
        void setNome(std::string nome);
        std::string getNome();
};