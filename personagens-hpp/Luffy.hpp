#ifndef LUFFY
#define LUFFY
#include "../core-simulador-hpp/Personagem.hpp"
class Luffy : public Personagem
{
    public:
        Luffy(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif