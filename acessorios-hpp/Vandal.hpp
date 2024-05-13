#ifndef VANDAL
#define VANDAL

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Vandal : public ArmaAtaque
{
    public:
        Vandal(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif