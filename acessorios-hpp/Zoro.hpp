#ifndef ZORO
#define ZORO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Zoro : public ArmaAtaque
{
    public:
        Zoro(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif