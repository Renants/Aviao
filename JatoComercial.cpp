#include "JatoComercial.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

JatoComercial::JatoComercial(int vl,int at,int cap)
	: Jatinho(vl,at,cap)
{
        this->modelo = "Comcorde";
}

const JatoComercial &JatoComercial::operator=(const JatoComercial &OldjatoComercial){
		this->escalasVector = OldjatoComercial.escalasVector;
        this->registro = OldjatoComercial.registro;
}

bool JatoComercial::operator ==(const JatoComercial & OldJatoComercial){	
    for(int i=0; escalasVector.size(); i++)
	{
		if(escalasVector[i] == OldJatoComercial.escalasVector[i])
		return true;
	}
	return false;
}

JatoComercial::~JatoComercial(){
	cout << "Destrutor chamado para Jato Comercial" << endl;
    cout <<"\nDestrutor chamado para *Resgistro..." << endl;
        delete [] registro;
}

void JatoComercial::regEmbarque(){
    if ( capacidade ==0){
        cout <<"Sem vagas" << endl;
    }
    else
    {
        this->registro = new Passenger[capacidade];
        string aux;    
        do  {
            cout << "Nome do passageiro: "<< capacidade << endl; 
            getline( cin, aux);
            registro[capacidade].setNome(aux);
            capacidade--;
            } while ( capacidade >= 0);
    }
}

void JatoComercial::getEmbarque(){
    if ( capacidade == 5 )    
        {
         cout <<"Vazio" << endl;
        }
    else
        {
            for ( this->capacidade = 5; capacidade >=0; capacidade -- ){
            registro[capacidade].getNome();}
        }
}

void JatoComercial::visorMensagem(){
	JatoComercial::Wait();
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
		cout <<"Jatinho ainda em solo..." << endl; 
	}
	else{
		cout <<"Jatinho no ar..." << endl;
	}
	JatoComercial::getPassenger();
}

void JatoComercial::alterarGps(){
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

void JatoComercial::alterarVelocidade(){
    	cout << "Velocidade desejada em Km/h: " << endl;
		int op;
		do{
		cin >> this->velocidade;
		if ( velocidade < 200)
		{
			cout << "Impossivel ganhar ou manter altitude a esta velocidade..." << endl;
			op =0;
		}
		
		else if( velocidade > vmax )
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

void JatoComercial::alterarPilotoauto(){
	if ( noar == false){
		Wait();
		cout << "\nErro Drone ainda em solo...\n" << endl;}
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

void JatoComercial::alterarAlcance(){
	int op;
	cout <<"Distancia do destino em km: " << endl;
	if ( noar == false)
 	{
		do{
		cin >> this->alcance;
		if ( alcance > autonomia*velocidade ){
			cout <<"Distancia excede a autonomia do "<< this->modelo << endl;
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
		
		cout << this->modelo <<" jah percorreu: " << alcance << endl;
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

void JatoComercial::decolar(){
	if ( noar == false) 
{
		cout <<"Procedimentos para decolagem..." << endl;
		alterarAlcance();	 
		alterarVelocidade();
		this->noar = true;
		//system("cls");
		cout <<"Acelerando Jatinho..." << endl;
			for ( int i = 1; i<=velocidade; i ++ )
			{
				Sleep(10);
				cout << i  << "km/h" << endl;
			}
		cout << "Jatinho no ar!" << endl;
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
		cout << "Jatinho jah esta no ar!" << endl;
		
	}
}

void JatoComercial::alterarVoo(){
	if ( noar == false){
		cout <<"Erro " << this->modelo " ainda em solo... " << endl;
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

void JatoComercial::alterarTransponder(){
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

void JatoComercial::visor(){
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
