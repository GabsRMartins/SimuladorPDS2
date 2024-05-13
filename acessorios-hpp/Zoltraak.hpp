#ifndef ZOLTRAAK
#define ZOLTRAAK

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Zoltraak : public ArmaAtaque
{
    public:
        Zoltraak(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif