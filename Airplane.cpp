#include"Airplane.h"
#include<windows.h>
#include<iostream>
using namespace std;
int Airplane::radar = 0;

Airplane::Airplane(int vmx, int aut)
    : blackbox(), vmax (vmx) , autonomia (aut), alcance ( vmax* autonomia )  
{
    
    noar 		= false;
	gps	        = false;
	transponder = false;
	pilotoauto  = false;
}

ostream &operator<<(ostream &output,const Airplane &Aviaoprint)
{
    output << "Autonomia: "<< Airplane.autonomia << "Alcance: "<< Airplane.alcance <<"Velocidade: " << Airplane.velocidade << endl;   
    return output;
}


Airplane & Airplane::operator=(const Airplane &copia){
	noar 		= copia.noar;
	gps	        = copia.gps;
	transponder = copia.transponder;
	pilotoauto  = copia.pilotoauto;
	velocidade	= copia.velocidade;
	alcance	    = copia.alcance;
    autonomia   = copia.autonomia;
    blackbox    = copia.blackbox;
}

bool Airplane::operator ==(const Airplane &AviaoCmp) const
{
    if(AviaoCmp.alcance != alcance) return false;
    if(AviaoCmp.autonomia!= autonomia) return false;
    if(AviaoCmp.vmax != vmx) return false;
    if(AviaoCmp.blackbox.print() != blackbox.print() ) return false;
    return true;
}


float Airplane::retVelocidade()const{
	return velocidade;
}
float Airplane::retAlcance()const{
	return alcance;
}
void Airplane::visorMenssagem()const{
	Wait();
	cout <<"\nData Default: " << endl; 
    blackbox.print();
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
	if ( pilotoauto == false){
		cout <<"Piloto automatico desligado..." << endl; 
	}
	else{
		cout <<"Piloto automatico ligado e funcionando..." << endl;
	}
	if ( noar == false){
		cout <<"Airplane ainda em solo..." << endl; 
	}
	else{
		cout <<"Airplane no ar..." << endl;
	}

}
float Airplane::retAux()const{
	return aux;
}
void Airplane::defGps(){
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
void Airplane::defTransponder(){
	if ( transponder == false){
	this->transponder = true;
	radar++;
	Wait();
	cout <<"\nTransponder ligado e funcionando..." << endl;
	}
	else
	{
	this->transponder = false;
	radar--;
	Wait();
	cout <<"\nTransponder desligado..." << endl;
		
	}
}

void Airplane::defPilotoauto(){
	if ( noar == false){
		Wait();
		cout << "\nErro helios One ainda em solo...\n" << endl;}
	else if ( gps && transponder == false ){
		Wait();
		cout << "\nGps e Transponder desligados..." << endl;
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
void Airplane::visor(){
	int aux;
	do{
	
	cout << "\nDisplay de Instrumentos: \n"
		 << "Ligar Gps			-1-\n" 
		 << "Ligar Transponder		-2-\n" 
		 << "Ligar Piloto automatico		-3-\n" 
		 << "Mostrar status dos insturmnetos	-4-\n"
		 << "Iniciar decolagem	 	-5-\n"
		 << "Alterar parametros de voo	-6-\n"
		 << "Mostrar Radar      		-7-\n"
         << "Sair do Display insturmnetos	-0-\n";
        cout << endl;
		cin >> aux;
		switch (aux){
			case 1:
				system("cls");
				defGps();
				
				break;
			case 2:
				system("cls");
				defTransponder();
				
				break;
			case 3:
				system("cls");
				defPilotoauto();
				break;
			case 4:
				system("cls");
				visorMenssagem();
				cout <<"\n";
				break;
			case 5:
				system("cls");
				defDecolar();
				cout <<"\n";
				break;
			case 6:
				system("cls");
				defAlterarvoo();
				cout <<"\n";
				break;
			case 7:
				system("cls");
				retRadar();
				cout <<"\n";
				break;
           default: 
				cout << "Esclolha Invalida..." << endl;}	 
	} while ( aux != 0);
}
void Airplane::defVelocidade(){
		cout << "Velocidade desejada em Km/h: " << endl;
		int op;
		do{
		cin >> this->velocidade;
		if ( velocidade < 200)
		{
			cout << "Impossivel ganhar ou manter altitude a esta velocidade..." << endl;
			op =0;
		}
		
		else if( velocidade > 300)
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
void Airplane::defAlcance(){
	int op;
	cout <<"Distancia do destino em km: " << endl;
	if ( noar == false)
 	{
		do{
		cin >> this->alcance;
		if ( alcance > autonomia*velocidade ){
			cout <<"Distancia excede a autonomia do Airplane..." << endl;
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
		
		cout << "Airplane jah percorreu: " << alcance << endl;
		cout << "Autonomia restante :" << (autonomia*velocidade) - alcance << endl;
		cout << "Nova distancia do destino em km: " << endl;
		this-> aux = this-> alcance;
		do{
			cin >> this-> alcance;
			if ( aux + alcance > autonomia*velocidade ){
			cout <<"Distancia excede a autonomia do Airplane..." << endl;
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
void Airplane::defDecolar(){
	if ( transponder == false )
	{ // Nao decolar com transponder off
		Wait();
		cout <<"\nErro Transponder desativado..." << endl;
		cout <<"Erro impossivel decolar..." << endl;
	}
	
	else if ( noar == false) 
{
		cout <<"Procedimentos para decolagem..." << endl;
		defAlcance();	 
		defVelocidade();
		this->noar = true;
		system("cls");
		cout <<"Acelerando Airplane..." << endl;
			for ( int i = 1; i<=velocidade; i ++ )
			{
				Sleep(10);
				cout << i  << "km/h" << endl;
			}
		cout << "Airplane no ar!" << endl;
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
		cout << "Airplane jah esta no ar!" << endl;
		
	}
}
void Airplane::defAlterarvoo(){
	if ( noar == false){
		cout <<"Erro Airplane ainda em solo... " << endl;
	}
	 else
	 {
	 
		cout << "Alterar velocidade: " << endl;
		defVelocidade();
		cout << "Alterar Distancia: " << endl;
		defAlcance();
		cout << "Nova velocidade: " << velocidade << endl;
		cout << "Nova distancia: " << alcance << endl;
		cout << "Tempo estimado para destino: " << alcance /velocidade <<"horas" << endl;
	 } 
}
void Airplane::Wait()const{
	cout << "Aguarde";
		for ( int i = 1; i<=30; i ++ ){
				Sleep(20);
				cout <<".";
			}
	

}

void Airplane::retRadar(){
	cout <<"Objetos no radar: "<< radar <<endl;
}

void Airplane::blackboxResgister(int day, int month, int year){
    
    blackbox.setDay(day);
    blackbox.setMonth(month);
    blackbox.setYear(year);
    
    cout <<"Ultima manutenção em: "  << endl;
    blackbox.print();
}

Airplane::~Airplane(){
        cout <<"\nDestrutor chamado para Airplane..." << endl;
        
}