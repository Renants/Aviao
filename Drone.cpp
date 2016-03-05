#include "Drone.h"
#include<iostream>
#include<iomanip>
friend ostream &operator <<( ostream & out, const Drone &Raptor ){
    cout << "Aucance de voo" << alcance << endl;
    return out;
}

Drone::Drone()
{
    Airplane::Airplane()
    missile = 4;
    velocidade = 1000;
    autonomia  = 10;
    alcance    = autonomia * velocidade;
}

Drone::Drone( const Drone & drone ){
    missile = drone.missile;
    velocidade = drone.velocidade;
    autonomia = drone.autonomia;
    alcance = drone.alcance;
}

Drone::Fire(){
    if ( ammunition = 0){
        cout <<"Sem municao!" << endl;
    }
        else
        {
            cout <<"Disparo feito!" << endl;
            this->ammunition--;
            cout << ammunition; 
        }
}


Drone::Firem(){
    if ( missile = 0){
        cout <<"Sem misseis!" << endl;
    }
        else
        {
            cout <<"Disparo feito!" << endl;
            this->missile--;
            cout << missile; 
        }


}


Drone::~Drone()
{
}

