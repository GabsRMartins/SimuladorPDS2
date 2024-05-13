#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Vandal.hpp"

Vandal::Vandal(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Vandal::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Vandal::gerarRuidoAtaque()
{
    return "Pa pum pow";
}
