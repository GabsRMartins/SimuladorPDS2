#ifndef PODERDAAMIZADE
#define PODERDAAMIZADE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class PoderDaAmizade : public ArmaDefesa
{
    public:
        PoderDaAmizade(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif