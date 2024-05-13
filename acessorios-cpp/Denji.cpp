#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Denji.hpp"

Denji::Denji(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Denji::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Denji::getResistencia() 
{
    return this->resistencia;
}