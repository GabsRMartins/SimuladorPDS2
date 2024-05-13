#ifndef EXCALIBUR
#define EXCALIBUR

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Excalibur : public ArmaAtaque
{
    public:
        Excalibur(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif