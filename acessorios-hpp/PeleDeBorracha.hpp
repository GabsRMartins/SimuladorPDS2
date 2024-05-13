#ifndef PELEDEBORRACHA
#define PELEDEBORRACHA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class PeleDeBorracha : public ArmaDefesa
{
    public:
        PeleDeBorracha(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif