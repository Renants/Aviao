#include "Airplane.h"
#include "Passenger.h"
#include "Drone.h"
#include "Jatinho.h"
#include<iostream>
#include<windows.h>
using namespace std;
void linha( int x){
	for ( int i = 1; i<=x; i ++ ){
		Sleep(50);
		cout << "*";
	}	
}
main(){
	
	Data Obj_blackbox(10,02,1992);
    string nome;
    linha(25);
	cout << "\n*Bem vindo ao Helios One Aircraft*\n";
	linha(25);
	
	Drone Raptor(1000,10);
	JatoComercial Mirrage (2000,5);
	
	Raptor.visor();
	Mirrage.visor();
    
    
    
	system("pause>0");
    
}

