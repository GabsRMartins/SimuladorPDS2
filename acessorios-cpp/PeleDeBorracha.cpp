#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/PeleDeBorracha.hpp"

PeleDeBorracha::PeleDeBorracha(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string PeleDeBorracha::getDescricaoArma() 
{
    return this->descricaoArma;
}

int PeleDeBorracha::getResistencia() 
{
    return this->resistencia;
}