#include "../personagens-hpp/Naomy.hpp"

Naomy::Naomy(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Naomy::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Naomy::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Naomy::pegarDescricao() 
{
    return "Quero um Chico Moedas pra mim";
}