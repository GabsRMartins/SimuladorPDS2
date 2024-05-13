#ifndef FRIEREN
#define FRIEREN
#include "../core-simulador-hpp/Personagem.hpp"
class Frieren : public Personagem
{
    public:
        Frieren(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif