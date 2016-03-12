#include "Drone.h"
#include<iostream>
#include<iomanip>

ostream &operator<<(ostream &output,const Drone &Aviaoprint)
{
    output << "Misseis: "<< Drone.misseis << "Projeteis: "<< Drone.balas << endl;   
    return output;
}

const Drone &operator=(const Drone &dcopia){ // Sobrecarga operato '=' class derivada Drone
	 static_cast<Airplane> (*this) = static_cast<Airplane> (dcopia);
		misseis = dcopia.misseis;
		balas	= dcopia.balas
}

bool Drone::operator==(const Drone &dronecmp) const // static cast class derivada drone
{
    if((static_cast<Airplane> (*this) == static_cast<Airplane>(dronecmp)){  
        return true;
    }
    else
    {
        return false;
    }
}

Drone::Drone( int vel, int aut)
    : Airplane(vel,aut) // Velocidade maxmima do drone e autonomia
{
    
    misseis = 4;
    balas = 100;

}

Drone::Drone(){
	Drone.vmax = 1000;
	Drone.autonomia = 4;
	misseis = 4;
    balas = 100;
}
Drone::Drone( const Drone & drone ){
    misseis = drone.misseis;
    velocidade = drone.velocidade;
    autonomia = drone.autonomia;
    alcance = drone.alcance;
}

void Drone::alterarDispararb(){
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


void Drone::alterarDispararm(){
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

