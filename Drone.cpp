#include "Drone"
#include<windows.h>
#include<iostream>
#include<iomanip>
using namespace std;
Drone::Drone( int vellocidade, int autonomia)
    : Airplane(vellocidade,autonomia) // Velocidade maxmima do drone e autonomia
{
    
    misseis = 4;
    projeteis = 100;

}

Drone::~Drone(){
    // tenho que deletar o vector de alvos...
}

const Drone &Drone::operator=(const Drone &OldDrone){
	
		this->misseis = OldDrone.misseis;
		this->projeteis	= OldDrone.projeteis;
}

bool Drone::operator==(const Drone &dronecmp) const{
    if(dronecmp.misseis != misseis) return false;
    if(dronecmp.projeteis!= projeteis) return false;
    if(dronecmp.vmax != vmax) return false;
    return true;
}

Drone::Drone(const Drone &OldDrone)
    :Airplane(OldDrone)
    {    
    projeteis = OldDrone.projeteis;
    misseis   = OldDrone.misseis;
    
}
    
string Drone::retAlvos(){
    return alvos;
}
