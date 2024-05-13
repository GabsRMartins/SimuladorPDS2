#ifndef MAKIMA
#define MAKIMA
#include "../core-simulador-hpp/Personagem.hpp"
class Makima : public Personagem
{
    public:
        Makima(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif