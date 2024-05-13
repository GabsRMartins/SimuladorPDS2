#include "../personagens-hpp/Luffy.hpp"

Luffy::Luffy(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Luffy::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Luffy::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Luffy::pegarDescricao() 
{
    return "Eu serei o Rei dos Piratas!";
}