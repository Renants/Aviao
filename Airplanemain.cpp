#include "Airplane.h"
#include "Passenger.h"
#include "Drone.h"
#include "Jatinho.h"
#include<iostream>
#include<vector>
#include<windows.h>
using namespace std;
void linha( int x){
	for ( int i = 1; i<=x; i ++ ){
		Sleep(50);
		cout << "*";
	}	
}
void display( Airplane * ptr ){
    ptr->visor();
}
main(){
	
	Data Obj_blackbox(01,01,2001);
    string nome;
    linha(25);
	cout << "\n*Bem vindo ao Helios One*\n";
	linha(25);
	
    vector<Airplane*> Avioes;
    
    Avioes.push_back(new Drone());
    Avioes.push_back(new Jatinho());
    Avioes.push_back(new JatoComercial());
    
    Drone *Raptor = dynamic_cast < Drone * > (Airplane); // dynamic_cast
    Jatinho *Concorde = dynamic_cast < Jatinho * > (Airplane);
    JatoComercial *Helios_One = dynamic_cast < JatoComercial * > (Jatinho);
    
    display( Raptor );
    display( Concorde );
    display( Helios_One );
    
    
system("pause>0");
    
}

