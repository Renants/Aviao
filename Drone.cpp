#include "Drone.h"
#include<iostream>
#include<iomanip>


const Drone &operator=(const Drone &dcopia){
		misseis = dcopia.misseis;
		balas	= dcopia.balas
}

bool Drone::operator==(const Drone &dronecmp) const
{
    if(dronecmp.misseis != misseis) return false;
    if(dronecmp.balas!= balas) return false;
    if(dronecmp.vmax != vmx) return false;
    if(dronecmp.blackbox.print() != blackbox.print() ) return false;
    return true;
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


void Drone::visorMenssagem(){
	Drone.Wait();
	cout <<"\nData Default: " << endl; 
    blackbox.print();
    cout << "\nStatus dos instrumentos:" << endl;
	if ( gps == false){
		cout <<"Gps desligado..." << endl; 
	}
	else{
		cout <<"Gps ligado e funcionando..." << endl;
	}
	
	if ( transponder == false){
		cout <<"transponder desligado..." << endl; 
	}
	else{
		cout <<"Tranponder ligado e funcionando..." << endl;
	}
	if ( pilotoauto == false){
		cout <<"Piloto automatico desligado..." << endl; 
	}
	else{
		cout <<"Piloto automatico ligado e funcionando..." << endl;
	}
	if ( noar == false){
		cout <<"Drone ainda em solo..." << endl; 
	}
	else{
		cout <<"Drone no ar..." << endl;
	}
	cout << "Munição restantante:" << endl;
	cout << "Misseis: " << misseis << endl;
	cout << "Balas: "	<< balas   << endl;
}


void Drone::adicionarAlvos( string alvo)
{
     this->Alvos.push_back(Alvos); 
}


Drone::~Drone()
{
    delete []Alvos;
}

