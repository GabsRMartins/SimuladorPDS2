#include "../personagens-hpp/Makima.hpp"

Makima::Makima(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Makima::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Makima::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Makima::pegarDescricao() 
{
    return "Você agora esta sobre meu controle";
}