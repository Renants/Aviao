#include "Airplane.h"
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
	Airplane Helios_One;
	string name;
	linha(40);
	cout << "\n*Bem vindo ao Helios One Aviao eletrico!*\n";
	linha(40);
	cout << "\nAutonomia de voo: 6 horas ininterruptas";
	cout << "\nVelocidade maxima em tempo favoravel: 300 km/h" <<endl;
	linha(40);
	cout << "\nBem vindo piloto!" << endl;
	cout << "Nome: ";  
	getline (cin,name);
	system("cls");
	linha(34);
	Helios_One.Display();	
	system("cls");
	linha(34);
	cout << "\nHelios One processando dados da viagem..." << endl;
	cout << "Aguarde";
	for ( int i = 1; i<=22; i ++ ){
				Sleep(100);
				cout <<".";
			}
	cout << "\n"; 
	cout << name <<",chegaste ao teu destino!" << endl;
	cout << "Distancia percorrida: " << Helios_One.getDistance() + Helios_One.getAux() << "Km" << endl;
	cout << "Tempo: " << (Helios_One.getDistance() + Helios_One.getAux() ) / Helios_One.getSpeed() << endl;
	cout << "Velocidade: " << Helios_One.getSpeed() << endl;	
	linha(34);
	system("pause>0");
}

