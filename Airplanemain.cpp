#include "Airplane.h"
#include "Drone.h"
#include "Jatinho.h"
#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;
vector<Airplane *> Hangar;

void linha( int x){
	for ( int i = 1; i<=x; i ++ ){
		Sleep(50);
		cout << "*";
	}	
}
void DisplayComercial(){
	int aux;
	do{
	
	cout << "\nDisplay de Instrumentos: \n"
		 << "Ligar Gps			-1-\n" 
		 << "Ligar Transponder		-2-\n" 
		 << "Ligar Piloto automatico		-3-\n" 
		 << "Iniciar decolagem	 	-4-\n"
		 << "Alterar parametros de voo	-5-\n"
		 << "Mostrar Radar      		-6-\n"
         << "Adicionar Passageiros      -7-"
         << "Mortrar Passgeiros         -8-"
         << "Sair do Display insturmnetos	-0-\n";
        cout << endl;
		cin >> aux;
		switch (aux){
			case 1:
				system("cls");
				alterarGps();
				
				break;
			case 2:
				system("cls");
				alterarTransponder();
				break;
			
            case 3:
				system("cls");
				alterarPilotoauto();
				break;
			
            case 4:
				system("cls");
				decolar();
				cout <<"\n";
				break;
			
            case 5:
				system("cls");
				alterarVoo();
				cout <<"\n";
				break;
			
            case 6:
				system("cls");
				Airplane::retRadar();
                cout <<"\n";
				break;
            case 7:
				system("cls");
				regEmbarque();
                cout <<"\n";
				break;
            case8:
				system("cls");
				getEmbarque();
                cout <<"\n";
				break;

                
           default: 
				cout << "Esclolha Invalida..." << endl;}	 
	} while ( aux != 0);
}

void DisplayMilitar(){
	int aux;
	do{
	
	cout << "\nDisplay de Instrumentos: \n"
		 << "Ligar Gps			-1-\n" 
		 << "Ligar Piloto automatico		-2-\n" 
		 << "Iniciar decolagem	 	-3-\n"
		 << "Alterar parametros de voo	-4-\n"
		 << "Mostrar Radar      		-5-\n"
         << "Sair do Display insturmnetos	-0-\n";
        cout << endl;
		cin >> aux;
		switch (aux){
			case 1:
				system("cls");
				alterarGps();
				
				break;
			case 2:
				system("cls");
				alterarPilotoauto();
				break;
			
            case 3:
				system("cls");
				decolar();
				cout <<"\n";
				break;
			
            case 4:
				system("cls");
				alterarVoo();
				cout <<"\n";
				break;
			
            case 5:
				system("cls");
				Airplane::retRadar();
                cout <<"\n";
				break;
            default: 
				cout << "Esclolha Invalida..." << endl;}	 
	} while ( aux != 0);
}

void DisplayDrone(){
	int aux;
	do{
	
	cout << "\nDisplay de Instrumentos: \n"
		 << "Adionar Alvos		-2-\n" 
		 << "Mostra Alvos       -3-"
         << "Disparar Projeteis     -4-"
         << "Dispara Misseis        -5-"
         << "Mostrar Projetes e Misseis		-6-\n" 
		 << "Ligar Piloto automatico		-7-\n" 
		 << "Iniciar decolagem	 	-8-\n"
		 << "Alterar parametros de voo	-9-\n"
		 << "Mostrar Radar      		-10-\n"
         << "Sair do Display insturmnetos	-0-\n";
        cout << endl;
		cin >> aux;
		switch (aux){
			case 1:
				//system("cls");
				adicionarAlvos();
				break;
			
            case 2:
				//system("cls");
				retAlvos();
				break;
			
            case 3:
				//system("cls");
				defDispararp();
				break;
			
            case 4:
				//system("cls");
				defDispararm();
				break;
			
            case 5:
				//system("cls");
				retAmmunition();
				break;
			
            case 6:
				//system("cls");
				alterarPilotoauto();
				break;
			
            case 7:
				//system("cls");
				decolar();
				cout <<"\n";
				break;
			
            case 8:
				//system("cls");
				alterarVoo();
				cout <<"\n";
				break;
			
            case 9:
				//system("cls");
				Airplane::retRadar();
                cout <<"\n";
				break;
           default: 
				cout << "Esclolha Invalida..." << endl;}	 
	} while ( aux != 0);
}

bool ehComercial( Airplane* avi){
    return typeid(Airplane*).modelo == typeid(JatoComercial).modelo;
}

bool ehMilitar( Airplane* avi ){
    return typeid(Airplane*).modelo == typeid(JatoMilitar).modelo;
}

bool ehDrone( Airplane* avi ){
    return typeid(Airplane*).modelo == typeid(Raptor).modelo;
}

void mainMenu(){
    int aux;
    do{
    cout << "Escolha um modelo:
        << "Militar     -1-\n"
        << "Comercial   -2-\n"
        << "Drone       -3-\n"
    cin aux;
    switch (aux){
    case 1:
       option ( new JatoMilitar(1000,10,15) );
        system("csl");
        break;
    case 2:
       option (new JatoComercial(700,5,7) ); 
        system("csl");
        break;
    case 3:
        option ( new Raptor (2000,3) );
        system("csl");
        break;
     default: 
    cout << "Esclolha Invalida..." << endl;}	    
    system("csl");
    } while (aux != 0 )
    
}

void option( Airplane *aviao){
    Airplane *ptr = dynamic_cast < JatoComercial * > (Airplane);
    Hangar.push_back(ptr);
    int aux;
    cout << "Que posição do Hangar deseja?: " << endl;
    cin Hangar[aux]
	{
		if(Hangar[aux] == ehComercial(ptr)){
            DisplayComercial();
        }
    else if (Hangar[aux] == ehMilitar(ptr)){
            DisplayMilitar();
	}
    else 
            DisplayDrone();
    
    }
}    

main(){
	int opt;
	Data Obj_blackbox(01,01,2001);
    string nome;
    linha(25);
	cout << "\n*Bem vindo ao Helios One*\n";
	linha(25);
    mainMenu();

system("pause>0");
    
}


