#include"Airplane.h"
#include<windows.h>
#include<iostream>
using namespace std;
Airplane::Airplane(){
	on_air 		= false;
	gps	        = false;
	transponder = false;
	piloto_auto = false;
	speed		=0;
	distance	=0;
	
}
float Airplane::getSpeed(){
	return speed;
}
float Airplane::getDistance(){
	return distance;
}
void Airplane::DisplayMessage(){
	Wait();
	cout << "\nStatus dos instrumentos:" << endl;
	if ( gps == false){
		cout <<"Gps desligado..." << endl; 
	}
	else{
		cout <<"Gps ligado e funcionando..." << endl;
	}
	
	if ( transponder == false){
		cout <<"transponder desligado..." << endl; 
	}
	else{
		cout <<"Tranponder ligado e funcionando..." << endl;
	}
	if ( piloto_auto == false){
		cout <<"Piloto automatico desligado..." << endl; 
	}
	else{
		cout <<"Piloto automatico ligado e funcionando..." << endl;
	}
	if ( on_air == false){
		cout <<"Airplane ainda em solo..." << endl; 
	}
	else{
		cout <<"Airplane no ar..." << endl;
	}

}
float Airplane::getAux(){
	return aux;
}
void Airplane::Gps(){
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
void Airplane::Transponder(){
	if ( transponder == false){
	this->transponder = true;
	Wait();
	cout <<"\nTransponder ligado e funcionando..." << endl;
	}
	else
	{
	this->transponder = false;
	Wait();
	cout <<"\nTransponder desligado..." << endl;
		
	}
}

void Airplane::Piloto_auto(){
	if ( on_air == false){
		Wait();
		cout << "\nErro helios One ainda em solo...\n" << endl;}
	else if ( gps && transponder == false ){
		Wait();
		cout << "\nGps e Transponder desligados..." << endl;
		}	 
	else if ( piloto_auto == true ){
			piloto_auto = false;
			Wait();
			cout <<"\nPiloto automatico desligado..." << endl;
		}
	else{
			piloto_auto = true;
			Wait();
			cout <<"\nPiloto automatico ligado e funcionando..." << endl;

		}	
}
void Airplane::Display(){
	int aux;
	do{
	
	cout << "\nDisplay de Instrumentos: \n"
		 << "Ligar Gps			-1-\n" 
		 << "Ligar Transponder		-2-\n" 
		 << "Ligar Piloto automatico		-3-\n" 
		 << "Mostrar status dos insturmnetos	-4-\n"
		 << "Iniciar decolagem	 	-5-\n"
		 << "Alterar parametros de voo	-6-\n"
		 << "Sair do Display insturmnetos	-0-\n";
	cout << endl;
		cin >> aux;
		switch (aux){
			case 1:
				system("cls");
				Gps();
				
				break;
			case 2:
				system("cls");
				Transponder();
				
				break;
			case 3:
				system("cls");
				Piloto_auto();
				break;
			case 4:
				system("cls");
				DisplayMessage();
				cout <<"\n";
				break;
			case 5:
				system("cls");
				TakeOff();
				cout <<"\n";
				break;
			case 6:
				system("cls");
				ChangeFlight();
				cout <<"\n";
				break;
			default: 
				cout << "Esclolha Invalida..." << endl;}	 
	} while ( aux != 0);
}
void Airplane::Speed(){
		cout << "Velocidade desejada em Km/h: " << endl;
		int op;
		do{
		cin >> this->speed;
		if ( this->speed < 100)
		{
			cout << "Impossivel ganhar ou manter altitude a esta velocidade..." << endl;
			op =0;
		}
		
		else if( this->speed > 300)
		{
				cout << "Velocidade maxima excedida..." << endl;
				op = 0;
		}
		
		else
		{
		this->speed = this->speed;
		op = 1;
		}
		
	} while ( op == 0);
}	
void Airplane::Distance(){
	int op;
	cout <<"Distancia do destino em km: " << endl;
	if ( on_air == false)
 	{
		do{
		cin >> this->distance;
		if ( distance > 1800 ){
			cout <<"Distancia excede a autonomia do Helius One..." << endl;
			op = 0;
		}
		else if ( distance <= 0 ){
			cout <<"Distancia invalida..." << endl;
			op = 0;
		}
		else{
			distance = distance;
			op = 1;
			} 
	} while ( op == 0);

	}
	
	else // Alterar distancia em voo
	{
		
		cout << "Helios One jah percorreu: " << distance << endl;
		cout << "Autonomia restante :" << 1800 - distance << endl;
		cout << "Nova distancia do destino em km: " << endl;
		this-> aux = this-> distance;
		do{
			cin >> this-> distance;
			if ( aux + distance > 1800 ){
			cout <<"Distancia excede a autonomia do Helius One..." << endl;
			op = 0;
			}
		else if ( distance < 0 ){
			cout <<"Distancia invalida..." << endl;
			op = 0;
		}
		
		else{
			distance = distance;
			op = 1;
		}
	} while ( op == 0);
	
	}  
}
void Airplane::TakeOff(){
	if ( transponder == false )
	{ // Nao decolar com transponder off
		Wait();
		cout <<"\nErro Transponder desativado..." << endl;
		cout <<"Erro impossivel decolar..." << endl;
	}
	
	else if ( on_air == false) 
{
		cout <<"Procedimentos para decolagem..." << endl;
		Distance();	 
		Speed();
		this->on_air = true;
		system("cls");
		cout <<"Acelerando Airplane..." << endl;
			for ( int i = 1; i<=speed; i ++ )
			{
				Sleep(10);
				cout << i  << "km/h" << endl;
			}
		cout << "Airplane no ar!" << endl;
		cout << "Tempo estimado para destino: " << distance/speed <<" horas" << endl;
		Wait();	
		for ( int i = 1; i<=distance; i ++ )
			{
				Sleep(10);
				cout <<"Distancia jah percorrida: "<< i  << "km" << endl;
			}
}
	else 
	{
		cout << "Airplane jah esta no ar!" << endl;
		
	}
}
void Airplane::ChangeFlight(){
	if ( on_air == false){
		cout <<"Erro Airplane ainda em solo... " << endl;
	}
	 else
	 {
	 
		cout << "Alterar velocidade: " << endl;
		Speed();
		cout << "Alterar Distancia: " << endl;
		Distance();
		cout << "Nova velocidade: " << speed << endl;
		cout << "Nova distancia: " << distance << endl;
		cout << "Tempo estimado para destino: " << distance/speed <<"horas" << endl;
	 } 
}
void Airplane::Wait(){
	cout << "Aguarde";
		for ( int i = 1; i<=30; i ++ ){
				Sleep(20);
				cout <<".";
			}
	

}

Airplane::~Airplane(){
	cout <<"\nDestrutor chamado para Airplane..." << endl;
}
