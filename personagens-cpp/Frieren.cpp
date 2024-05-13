#include "../personagens-hpp/Frieren.hpp"

Frieren::Frieren(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Frieren::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Frieren::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Frieren::pegarDescricao() 
{
    return "Esse é o poder de uma elfa de 1000 anos!";
}