#include "Drone.h"
#include<iostream>
#include<iomanip>

ostream &operator<<(ostream &output,const Drone &Aviaoprint)
{
    output << "Misseis: "<< Drone.misseis << "Projeteis: "<< Drone.balas << endl;   
    return output;
}
Drone::Drone( int vel, int aut)
    : Airplane(vel,aut) // Velocidade maxmima do drone e autonomia
{
    
    misseis = 4;
    balas = 100;

}

Drone::Drone( const Drone & drone ){
    misseis = drone.misseis;
    velocidade = drone.velocidade;
    autonomia = drone.autonomia;
    alcance = drone.alcance;
}

void Drone::defFirebala(){
    if ( balas = 0){
        cout <<"Sem municao!" << endl;
    }
        else
        {
            cout <<"Disparo feito!" << endl;
            this->balas--;
            cout << balas; 
        }
}


void Drone::defFiremissil(){
    if ( misseis = 0){
        cout <<"Sem misseis!" << endl;
    }
        else
        {
            cout <<"Disparo feito!" << endl;
            this->misseis--;
            cout << misseis; 
        }


}


Drone::~Drone()
{
    
}

