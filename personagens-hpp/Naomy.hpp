#ifndef NAOMY
#define NAOMY
#include "../core-simulador-hpp/Personagem.hpp"
class Naomy : public Personagem
{
    public:
        Naomy(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif