#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Zoltraak.hpp"

Zoltraak::Zoltraak(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Zoltraak::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Zoltraak::gerarRuidoAtaque()
{
    return "Zoltraak!";
}
