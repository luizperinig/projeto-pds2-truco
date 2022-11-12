#include "player.hpp"
#include <vector>

class Bot : public Player {
    private:
        std::vector<std::string> _nomes;

    public:
        std::string getNome();
};