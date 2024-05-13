#ifndef ASPAS
#define ASPAS
#include "../core-simulador-hpp/Personagem.hpp"
class Aspas : public Personagem
{
    public:
        Aspas(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif