#ifndef CORRENTES
#define CORRENTES

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Correntes : public ArmaAtaque
{
    public:
        Correntes(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif