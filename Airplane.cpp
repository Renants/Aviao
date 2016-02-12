#include"Airplane.h"
#include<windows.h>
#include<iostream>
using namespace std;
Airplane::Airplane(){
	On_air 		= false;
	Gps	        = false;
	Transponder = false;
	Piloto_auto = false;
	Autonomia	= 6;
}
float Airplane::getSpeed(){
	return Speed;
}
float Airplane::getDistancia(){
	return Distancia;
}
void Airplane::getDisplay(){
	Wait();
	cout << "\nStatus dos instrumentos:" << endl;
	if ( Gps == false){
		cout <<"Gps desligado..." << endl; 
	}
	else{
		cout <<"Gps ligado e funcionando..." << endl;
	}
	
	if ( Transponder == false){
		cout <<"transponder desligado..." << endl; 
	}
	else{
		cout <<"Tranponder ligado e funcionando..." << endl;
	}
	if ( Piloto_auto == false){
		cout <<"Piloto automatico desligado..." << endl; 
	}
	else{
		cout <<"Piloto automatico ligado e funcionando..." << endl;
	}
	if ( On_air == false){
		cout <<"Airplane ainda em solo..." << endl; 
	}
	else{
		cout <<"Airplane no ar..." << endl;
	}

}
float Airplane::getAux(){
	return Aux;
}
void Airplane::setGps(){
	if ( Gps == false ){
	Gps = true;
	Wait();
	cout <<"\nGps ligado e funcionando..." << endl;
	}
	
	else{
	Wait();
	cout <<"\nGps desligado..." << endl;
	Gps = false;
	}
	
}
void Airplane::setTransponder(){
	this->Transponder = true;
	Wait();
	cout <<"\nTransponder ligado e funcionando..." << endl;
}
void Airplane::set_Piloto_auto(){
	if ( On_air == false){
		Wait();
		cout << "\nErro helios One ainda em solo...\n" << endl;}
	else if ( Gps && Transponder == false ){
		Wait();
		cout << "\nGps e Transponder desligados..." << endl;
		}	 
	else if ( Piloto_auto == true ){
			Piloto_auto = false;
			Wait();
			cout <<"\nPiloto automatico desligado..." << endl;
		}
	else{
			Piloto_auto = true;
			Wait();
			cout <<"\nPiloto automatico ligado e funcionando..." << endl;

		}	
}
void Airplane::setDisplay(){
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
				setGps();
				
				break;
			case 2:
				system("cls");
				setTransponder();
				
				break;
			case 3:
				system("cls");
				set_Piloto_auto();
				break;
			case 4:
				system("cls");
				getDisplay();
				cout <<"\n";
				break;
			case 5:
				system("cls");
				setDecolar ();
				cout <<"\n";
				break;
			case 6:
				system("cls");
				setAlterarvoo();
				cout <<"\n";
				break;
			default: 
				cout << "Esclolha Invalida..." << endl;}	 
	} while ( aux != 0);
}
void Airplane::setSpeed(){
		cout << "Velocidade desejada em Km/h: " << endl;
		int op;
		do{
		cin >> this->Speed;
		if ( this->Speed < 100)
		{
			cout << "Impossivel ganhar ou manter altitude a esta velocidade..." << endl;
			op =0;
		}
		
		else if( this->Speed > 300)
		{
				cout << "Velocidade maxima excedida..." << endl;
				op = 0;
		}
		
		else
		{
		this->Speed = this->Speed;
		op = 1;
		}
		
	} while ( op == 0);
}	
void Airplane::setDistancia(){
	int op;
	cout <<"Distancia do destino em km: " << endl;
	if ( On_air == false)
 	{
		do{
		cin >> this->Distancia;
		if ( Distancia > 1800 ){
			cout <<"Distancia excede a autonomia do Helius One..." << endl;
			op = 0;
		}
		else if ( Distancia <= 0 ){
			cout <<"Distancia invalida..." << endl;
			op = 0;
		}
		else{
			Distancia = Distancia;
			op = 1;
			} 
	} while ( op == 0);

	}
	
	else // Alterar distancia em voo
	{
		
		cout << "Helios One jah percorreu: " << Distancia << endl;
		cout << "Autonomia restante :" << 1800 - Distancia << endl;
		cout << "Nova distancia do destino em km: " << endl;
		this->Aux = this->Distancia;
		do{
			cin >> this->Distancia;
			if ( Aux + Distancia > 1800 ){
			cout <<"Distancia excede a autonomia do Helius One..." << endl;
			op = 0;
			}
		else if ( Distancia < 0 ){
			cout <<"Distancia invalida..." << endl;
			op = 0;
		}
		
		else{
			Distancia = Distancia;
			op = 1;
		}
	} while ( op == 0);
	
	}  
}
void Airplane::setDecolar(){
	if ( Transponder == false )
	{ // Nao decolar com transponder off
		Wait();
		cout <<"\nErro Transponder desativado..." << endl;
		cout <<"Erro impossivel decolar..." << endl;
	}
	
	else if ( On_air == false) 
{
		cout <<"Procedimentos para decolagem..." << endl;
		setDistancia();	 
		setSpeed();
		this->On_air = true;
		system("cls");
		cout <<"Acelerando Helios One..." << endl;
			for ( int i = 1; i<=Speed; i ++ )
			{
				Sleep(100);
				cout << i  << "km/h" << endl;
			}
		cout << "Helios One no ar!" << endl;
		cout << "Tempo estimado para destino: " << Distancia/Speed <<" horas" << endl;
		Wait();	
		for ( int i = 1; i<=Distancia; i ++ )
			{
				Sleep(50);
				cout <<"Distancia jah percorrida: "<< i  << "km" << endl;
			}
}
	else 
	{
		cout << "Helios One jah esta no ar!" << endl;
		
	}
}
void Airplane::setAlterarvoo(){
	if ( On_air == false){
		cout <<"Erro Helios One ainda em solo... " << endl;
	}
	 else
	 {
	 
		cout << "Alterar velocidade: " << endl;
		setSpeed();
		cout << "Alterar Distancia: " << endl;
		setDistancia();
		cout << "Nova velocidade: " << Speed << endl;
		cout << "Nova distancia: " << Distancia << endl;
		cout << "Tempo estimado para destino: " << Distancia/Speed <<"horas" << endl;
	 } 
}
void Airplane::Wait(){
	cout << "Aguarde";
		for ( int i = 1; i<=30; i ++ ){
				Sleep(100);
				cout <<".";
			}
	

}

