#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/MagiaDeDefesa.hpp"

MagiaDeDefesa::MagiaDeDefesa(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string MagiaDeDefesa::getDescricaoArma() 
{
    return this->descricaoArma;
}

int MagiaDeDefesa::getResistencia() 
{
    return this->resistencia;
}