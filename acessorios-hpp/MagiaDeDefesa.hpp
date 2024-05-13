#ifndef MAGIADEDEFESA
#define MAGIADEDEFESA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class MagiaDeDefesa : public ArmaDefesa
{
    public:
        MagiaDeDefesa(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif