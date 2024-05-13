#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Correntes.hpp"
#include "../acessorios-hpp/Denji.hpp"
#include "../acessorios-hpp/Excalibur.hpp"
#include "../acessorios-hpp/MagiaDeDefesa.hpp"
#include "../acessorios-hpp/PeleDeBorracha.hpp"
#include "../acessorios-hpp/PoderDaAmizade.hpp"
#include "../acessorios-hpp/Sorte.hpp"
#include "../acessorios-hpp/Vandal.hpp"
#include "../acessorios-hpp/Zoltraak.hpp"
#include "../acessorios-hpp/Zoro.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Aspas.hpp"
#include "../personagens-hpp/Frieren.hpp"
#include "../personagens-hpp/Luffy.hpp"
#include "../personagens-hpp/Makima.hpp"
#include "../personagens-hpp/Naomy.hpp"

#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Zoro("O maior espadachim do mundo",100,6666);
    ArmaAtaque* arma2 = new Zoltraak("Magia de Ataque",100,5000);
    ArmaAtaque* arma3 = new Correntes("Correntes",100,2500);
    ArmaAtaque* arma4 = new Vandal("Vandal",100,3500);
    ArmaAtaque* arma5 = new Excalibur("Excalibur",100,8500);

    ArmaDefesa* escudo = new PeleDeBorracha("Gomu Gomu", 500);
    ArmaDefesa* escudo2 = new MagiaDeDefesa("Não sei o nome dela", 650);
    ArmaDefesa* escudo3 = new Denji("O chainsawman", 800);
    ArmaDefesa* escudo4 = new Sorte("O chainsawman", 777);
    ArmaDefesa* escudo5 = new PoderDaAmizade("O chainsawman", 999);

    
    Personagem* p1 = new Luffy(1, "Luffy", 5000, arma, escudo);
    Personagem* p2 = new Frieren(2, "Frieren", 7000, arma2, escudo2);
    Personagem* p3 = new Makima(3, "Makima", 2500, arma3, escudo3);
    Personagem* p4 = new Aspas(4, "Aspas", 2500, arma4, escudo4);
    Personagem* p5 = new Naomy(5, "Naomy", 2500, arma5, escudo5);
    Personagem* p6 = new Chaves(6, "Chaves", 2500, arma5, escudo5);



    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 2);
    simulador->adicionarPersonagem(p4, 1);
    simulador->adicionarPersonagem(p5, 1);
    simulador->adicionarPersonagem(p6, 2);

    
    simulador->iniciarSimulacao();

    return 0;
}