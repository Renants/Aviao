#include "Airplane.h"
#include "Drone.h"
#include "Jatinho.h"
#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

void linha( int x){
	for ( int i = 1; i<=x; i ++ ){
		Sleep(50);
		cout << "*";
	}	
}
void Menu(){
    int opt; 
    cout << "Escolha um modelo:
        << "Militar     -1-\n"
        << "Comercial   -2-\n"
        << "Drone       -3-\n"
    cin >> opt;
	vector <Airplane*> aviao;
	switch(opt){
	case 1: 
	aviao.push_back(new JatoMilitar());}
    case 2:
    aviao.push_back(new JatoComercial()); 
	case 3:
    aviao.push_back(new Raptor());
	
    option( aviao.at(0));
}
void option( Airplane *aviao){
    
	JatoMilitar    *Jm = dynamic_cast< JatoMilitar *>(aviao);
	JatoComercial  *Jc = dynamic_cast< JatoComercial *>(aviao);
	Raptor         *Dm= dynamic_cast< Raptor *>(aviao);
	
    if ( Jm != 0 ){
        Jm->visor();
    }
    if ( Jc != 0 ){
        Jc->visor();
    }
    else
        Dm->visor();
}

main(){
	int opt;
	Data Obj_blackbox(01,01,2001);
    string nome;
    linha(25);
	cout << "\n*Bem vindo ao Helios One*\n";
	linha(25);
    Menu();

	
system("pause>0");
    
}


