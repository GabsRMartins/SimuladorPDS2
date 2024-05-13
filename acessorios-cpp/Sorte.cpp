#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Sorte.hpp"

Sorte::Sorte(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Sorte::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Sorte::getResistencia() 
{
    return this->resistencia;
}