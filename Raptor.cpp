#include "Raptor.h"

Raptor::Raptor(int v, int a) // autonomia & velocidade
    :Drone(v,a)
{

    misseis = 6;
    balas = 1000;

}

Raptor::Raptor( const Drone & outro ){
    misseis = outro.misseis;
    velocidade = outro.velocidade;
    autonomia = outro.autonomia;
    alcance = outro.alcance;
}


    
}
Raptor::~Raptor()
{
    cout <<"Destruto chamado para Raptor" <<endl;
}

void Raptor::foto(){
    cout << "Foto tirada" << endl;
}
