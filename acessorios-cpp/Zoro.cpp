#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Zoro.hpp"

Zoro::Zoro(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Zoro::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Zoro::gerarRuidoAtaque()
{
    return "Luffy nossos sonhos estão perto de se realizar!";
}
