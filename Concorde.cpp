#include "Concorde.h"

Concorde::Concorde()
    : Jatinho(1000,5) // Velocidade maxmima do drone e autonomia
{
    capacidade = 10;
}

Concorde::Concorde( const &outro)
    capacidade = outro.capacidade;
    velocidade = outro.velocidade;
    autonomia  = outro.autonomia;
    alcance    = outro.alcance;
Concorde::~Concorde()
{
    cout << "destrutor chamado para Comcorde" << endl;
}

