#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Correntes.hpp"

Correntes::Correntes(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Correntes::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Correntes::gerarRuidoAtaque()
{
    return "Vrusshhhhh";
}
