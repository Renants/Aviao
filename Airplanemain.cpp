#include "Airplane.h"
#include "Drone.h"
#include "Jatinho.h"
#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

main(){
	int opt;
	Data Obj_blackbox(01,01,2001);
    string nome;
    linha(25);
	cout << "\n*Bem vindo ao Helios One*\n";
	linha(25);
    vector< Airplane* > jatos(3); // Vector;
    jatos.push_back( new JatoComercial(700,5,7)
    jatos.push_back( new JatoMilitar(1000,10,15));
    jatos.push_back( new JatoComercial(700,5,7);
    jatos.push_back( new Raptor(500,5));
    for ( int=0; i<4= i++  ){
        jatos[i]->decolar();
        jatos[i]->alterarVelocidade();
        jatos[i]->visorMensagem();
 	JatoMilitar *ptr = dynamic_cast < JatoMilitar * > ( Jatos[i]); // dynamic_cast;
    if ( ptr != 0){
        ptr->reabastecimentoAerio();
    }
}
    
system("pause>0");
    
}

/*void DisplayComercial(){
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

*/






