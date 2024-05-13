#include "../personagens-hpp/Aspas.hpp"

Aspas::Aspas(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Aspas::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Aspas::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Aspas::pegarDescricao() 
{
    return "Vai ganhar sempre";
}