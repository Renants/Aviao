#include "Airplane.h"
#include "Passenger.h"
#include "PhoneNumber.h"
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
    PhoneNumber phone;
    Airplane Helios_One;
	Data Obj_blackbox(25,02,2017);
    cout << "phone number i the form (123) 456-7890 ";
    cin >> phone;
    cout << "The number is: " << phone << endl;
    string nome;
    linha(25);
	cout << "\n*Bem vindo ao Helios One*\n";
	linha(25);
	Helios_One.Display();	
	system("cls");
    
    cout << "\nHelios One processando dados da viagem..." << endl;
	cout << "Aguarde";
	for ( int i = 1; i<=22; i ++ ){
				Sleep(100);
				cout <<".";
			}
	cout << "\n"; 
	cout << "Chegaste ao teu destino!" << endl;
	cout << "Distancia percorrida: " << Helios_One.getDistance() + Helios_One.getAux() << "Km" << endl;
	cout << "Tempo: " << (Helios_One.getDistance() + Helios_One.getAux() ) / Helios_One.getSpeed() << endl;
	cout << "Velocidade: " << Helios_One.getSpeed() << endl;	
	
    system("pause>0");
    
}

