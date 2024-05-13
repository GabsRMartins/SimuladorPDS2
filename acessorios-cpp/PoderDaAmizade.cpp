#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/PoderDaAmizade.hpp"

PoderDaAmizade::PoderDaAmizade(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string PoderDaAmizade::getDescricaoArma() 
{
    return this->descricaoArma;
}

int PoderDaAmizade::getResistencia() 
{
    return this->resistencia;
}