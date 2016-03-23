#include "Drone.h"
#include<windows.h>
#include<iostream>
#include<iomanip>
using namespace std;
Drone::Drone( int vel, int aut)
    : Airplane(vel,aut) // Velocidade maxmima do drone e autonomia
{
    
    misseis = 4;
    projeteis = 100;

}

const Drone &Drone::operator=(const Drone &OldDrone){
	
		this->misseis = OldDrone.misseis;
		this->projeteis	= OldDrone.projeteis;
}

ostream& operator<<(ostream &output, const Drone &display)
{
	output << "\n Basic Information: "; display.visorMensagem();
    return output;
}


bool Drone::operator==(const Drone &dronecmp) const{
    if(dronecmp.misseis != misseis) return false;
    if(dronecmp.projeteis!= projeteis) return false;
    if(dronecmp.vmax != vmax) return false;
    return true;
}

Drone::Drone(const Drone &OldDrone)
    :Airplane(OldDrone)
    {    
    projeteis = OldDrone.projeteis;
    misseis   = OldDrone.misseis;
    
}
    
void Drone::defDispararp(){
    if ( projeteis = 0){
        cout <<"Sem municao!" << endl;
    }
        else
        {
            cout <<"Disparo feito!" << endl;
            this->projeteis--;
            cout << projeteis; 
        }
}

void Drone::defDispararm(){
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

void Drone::visor(){
	int aux;
	do{
	
	cout << "\nDisplay de Instrumentos: \n"
		 << "Ligar Gps			-1-\n" 
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
				alterarGps();
				
				break;
			case 2:
				//system("cls");
				adicionarAlvos();
				break;
			
            case 3:
				//system("cls");
				retAlvos();
				break;
			
            case 4:
				//system("cls");
				defDispararp();
				break;
			
            case 5:
				//system("cls");
				defDispararm();
				break;
			
            case 6:
				//system("cls");
				retAmmunition();
				break;
			
            case 7:
				//system("cls");
				alterarPilotoauto();
				break;
			
            case 8:
				//system("cls");
				decolar();
				cout <<"\n";
				break;
			
            case 9:
				//system("cls");
				alterarVoo();
				cout <<"\n";
				break;
			
            case 10:
				//system("cls");
				Airplane::retRadar();
                cout <<"\n";
				break;
           default: 
				cout << "Esclolha Invalida..." << endl;}	 
	} while ( aux != 0);
}

void Drone::visorMensagem(){
	Drone::Wait();
	cout <<"\nData Default: " << endl; 
    blackbox.print();
    cout << "\nStatus dos instrumentos:" << endl;
	if ( gps == false){
		cout <<"Gps desligado..." << endl; 
	}
	else{
		cout <<"Gps ligado e funcionando..." << endl;
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
	cout << "Balas: "	<< projeteis   << endl;
}

void Drone::adicionarAlvos(){
    cout <<"Alvo atual: ";
    getline(cin,alvos);
	alvosVector.push_back(alvos);
}

string Drone::retAlvos(){
    return alvos;
}

Drone::~Drone(){
    // tenho que deletar o vector de alvos...
}

void Drone::alterarGps(){
	if ( gps == false ){
	gps = true;
	Wait();
	cout <<"\nGps ligado e funcionando..." << endl;
	}
	else{
	Wait();
	cout <<"\nGps desligado..." << endl;
	gps = false;
	}
	
}

void Drone::alterarVelocidade(){
    	cout << "Velocidade desejada em Km/h: " << endl;
		int op;
		do{
		cin >> this->velocidade;
		if ( velocidade < 200)
		{
			cout << "Impossivel ganhar ou manter altitude a esta velocidade..." << endl;
			op =0;
		}
		
		else if( velocidade > vmax)
		{
				cout << "Velocidade maxima excedida..." << endl;
				op = 0;
		}
		
		else
		{
		this->velocidade = velocidade;
		op = 1;
		}
		
	} while ( op == 0);
}

void Drone::alterarPilotoauto(){
	if ( noar == false){
		Wait();
		cout << "\nErro Drone ainda em solo...\n" << endl;}
	else if ( gps  == false ){
		Wait();
		cout << "\nGps desligado..." << endl;
		}	 
	else if ( pilotoauto == true ){
			pilotoauto = false;
			Wait();
			cout <<"\nPiloto automatico desligado..." << endl;
		}
	else{
			pilotoauto = true;
			Wait();
			cout <<"\nPiloto automatico ligado e funcionando..." << endl;

		}	
}

void Drone::alterarAlcance(){
	int op;
	cout <<"Distancia do destino em km: " << endl;
	if ( noar == false)
 	{
		do{
		cin >> this->alcance;
		if ( alcance > autonomia*velocidade ){
			cout <<"Distancia excede a autonomia do Drone..." << endl;
			op = 0;
		}
		else if ( alcance <= 0 ){
			cout <<"Distancia invalida..." << endl;
			op = 0;
		}
		else{
			this->alcance = alcance;
			op = 1;
			} 
	} while ( op == 0);

	}
	
	else // Alterar distancia em voo
	{
		
		cout << "Drone jah percorreu: " << alcance << endl;
		cout << "Autonomia restante :" << (autonomia*velocidade) - alcance << endl;
		cout << "Nova distancia do destino em km: " << endl;
		this-> aux = this-> alcance;
		do{
			cin >> this-> alcance;
			if ( aux + alcance > autonomia*velocidade ){
			cout <<"Distancia excede a autonomia do Drone..." << endl;
			op = 0;
			}
		else if ( alcance < 0 ){
			cout <<"Distancia invalida..." << endl;
			op = 0;
		}
		
		else{
			alcance = alcance;
			op = 1;
		}
	} while ( op == 0);
	
	}  
}

void Drone::decolar(){
	if ( noar == false) 
{
		cout <<"Procedimentos para decolagem..." << endl;
		alterarAlcance();	 
		alterarVelocidade();
		this->noar = true;
		//system("cls");
		cout <<"Acelerando Drone..." << endl;
			for ( int i = 1; i<=velocidade; i ++ )
			{
				Sleep(10);
				cout << i  << "km/h" << endl;
			}
		cout << "Drone no ar!" << endl;
		cout << "Tempo estimado para destino: " << alcance/velocidade <<" horas" << endl;
		Wait();	
		for ( int i = 1; i<=alcance; i ++ )
			{
				Sleep(10);
				cout <<"Distancia jah percorrida: "<< i  << "km" << endl;
			}
}
	else 
	{
		cout << "drone jah esta no ar!" << endl;
		
	}
}

void Drone::alterarVoo(){
	if ( noar == false){
		cout <<"Erro Drone ainda em solo... " << endl;
	}
	 else
	 {
	 
		cout << "Alterar velocidade: " << endl;
		alterarVelocidade();
		cout << "Alterar Distancia: " << endl;
		alterarAlcance();
		cout << "Nova velocidade: " << velocidade << endl;
		cout << "Nova distancia: " << alcance << endl;
		cout << "Tempo estimado para destino: " << alcance /velocidade <<"horas" << endl;
	 } 
}

void Drone::retAmmunition(){
    cout << projeteis << endl;
    cout << misseis << endl;
}