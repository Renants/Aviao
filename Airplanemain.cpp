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
	//objetos criados
    
	Data Obj_blackbox(10,02,1992);
    string nome;
    linha(25);
	cout << "\n*Bem vindo ao Helios One Aircraft*\n";
	linha(25);
    
    
    system("pause>0");
    
}

