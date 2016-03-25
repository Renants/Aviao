#include "Airplane.h"
#include <windows.h>
#include <iostream>
using namespace std;
int Airplane::radar = 0;

Airplane::Airplane(int velocidade_maxima, int Autonomia)
    : blackbox(), vmax (velocidade_maxima) , autonomia (Autonomia), alcance ( vmax* autonomia )  
{
    
    noar 		= false;
	gps	        = false;
	transponder = false;
	pilotoauto  = false;
}
Airplane::Airplane(){
    noar 		= false;
	gps	        = false;
	transponder = false;
	pilotoauto  = false;
}

Airplane::Airplane( const Airplane &OldAirplane ){
	noar 		= OldAirplane.noar;
	gps	        = OldAirplane.gps;
	transponder = OldAirplane.transponder;
	pilotoauto  = OldAirplane.pilotoauto;
	velocidade	= OldAirplane.velocidade;
	alcance	    = OldAirplane.alcance;
    autonomia   = OldAirplane.autonomia;

}

Airplane & Airplane::operator=(const Airplane &OldAirplane){
	noar 		= OldAirplane.noar;
	gps	        = OldAirplane.gps;
	transponder = OldAirplane.transponder;
	pilotoauto  = OldAirplane.pilotoauto;
	velocidade	= OldAirplane.velocidade;
	alcance	    = OldAirplane.alcance;
    autonomia   = OldAirplane.autonomia;

}

bool Airplane::operator ==(const Airplane &AviaoCmp) const{
    if(AviaoCmp.alcance != alcance) return false;
    if(AviaoCmp.autonomia!= autonomia) return false;
    if(AviaoCmp.vmax != vmax) return false;
    return true;
}

float Airplane::retVelocidade()const{
	return velocidade;
}

float Airplane::retAlcance()const{
	return alcance;
}

float Airplane::retAux()const{
	return aux;
}

void Airplane::Wait()const{
	cout << "Aguarde";
		for ( int i = 1; i<=30; i ++ ){
				Sleep(20);
				cout <<".";
			}
	

}

void Airplane::retRadar(){
	cout <<"Objetos no radar: "<< radar <<endl;
}

void Airplane::blackboxResgister(int day, int month, int year){
    
    blackbox.setDay(day);
    blackbox.setMonth(month);
    blackbox.setYear(year);
    
    cout <<"Ultima manutenção em: "  << endl;
    blackbox.print();
}

Airplane::~Airplane(){
        cout <<"\nDestrutor chamado para Airplane..." << endl;
        
}