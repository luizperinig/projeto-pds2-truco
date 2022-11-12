#include "player.hpp"
#include <vector>

class Bot : public Player {
    private:
        std::vector<std::string> _nomes;
        int _dificuldade;

    public:
        std::string getNome();
        void setNome();
};


