#include "JatoMilitar.h"
#include <iostream>
#include <stream>
JatoMilitar::JatoMilitar(){
    projeteis = 1000;
}
ostream& operator<<(ostream &output, const JatoMilitar &display){
	output << "\n Basic Information: "; display.visorMensagem();
    return output;
}

const JatoMilitar &JatoMilitar::operator=(const JatoMilitar &OldJatoMilitar){
		this->Paraquedistas = OldJatoMilitar.Paraquedistas;
        this->registro = OldJatoMilitar.registro;
        this->projeteis = OldJatoMilitar.projeteis;
        
}

JatoMilitar::~JatoMilitar(){
    cout << "Destrutor chamado para JatoMilitar";
    
}

JatoMilitar::JatoMilitar(int vl,int at,int cap)
	: Jatinho(vl,at,cap)
{
        this->modelo = "C-130 Hercules";
}

void JatoMilitar::visorMensagem(){
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
	if ( pilotoauto == false){
		cout <<"Piloto automatico desligado..." << endl; 
	}
	else{
		cout <<"Piloto automatico ligado e funcionando..." << endl;
	}
	if ( noar == false){
		cout <<"Erro" << this->modelo <<" ainda em solo..." << endl; 
	}
	else{
		cout << this->modelo <<" no ar..." << endl;
	}
	
}

void JatoMilitar::alterarGps(){
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

void JatoMilitar::alterarVelocidade(){
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

void JatoMilitar::alterarPilotoauto(){
	if ( noar == false){
		Wait();
		cout << "Erro " << this->modelo << "ainda em solo...\n" << endl;}
	else if ( gps  == false ){
		Wait();
		cout << "\nGps  desligado..." << endl;
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

void JatoMilitar::alterarAlcance(){
	int op;
	cout <<"Distancia do destino em km: " << endl;
	if ( noar == false)
 	{
		do{
		cin >> this->alcance;
		if ( alcance > autonomia*velocidade ){
			cout <<"Distancia excede a autonomia do "<<this->modelo << endl;
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
			cout <<"Distancia excede a autonomia do "<< this->modelo << endl;
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

void JatoMilitar::decolar(){
	if ( noar == false) 
{
		cout <<"Procedimentos para decolagem..." << endl;
		alterarAlcance();	 
		alterarVelocidade();
		this->noar = true;
		//system("cls");
		cout <<"Acelerando "<<this->modelo << endl;
			for ( int i = 1; i<=velocidade; i ++ )
			{
				Sleep(10);
				cout << i  << "km/h" << endl;
			}
		cout <<this->modelo <<" no ar!" << endl;
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

void JatoMilitar::alterarVoo(){
	if ( noar == false){
		cout <<"Erro"  this->modelo <<" ainda em solo... " << endl;
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


void JatoMilitar::reabastecer(){
    if ( noar == false ){
    cout << this->modelo <<" ainda em solo";
    }else{
        JatoMilitar::Wait();    
        cout << this->modelo <<" Reabastecimento do "<< this->modelo <<" em andamento..." << end;
        cout << "Autonomia anterior: " << this->autonomia << endl;
        this->autonomia =  5;
        cout << "Autonomia Atual: " << this->autonomia << endl;
            
    }
}

void JatoMilitar::defDispararp(){ // método especifico Jato Militar
    if ( projeteis = 0){
        cout <<"Sem municao!" << endl;
    }
    else{
            cout <<"Disparo feito!" << endl;
            this->projeteis--;
            this->projeteis--;
            cout << projeteis; 
        }
}

void JatoComercial::regEmbarque(){
    if ( capacidade == 0){
        cout <<this->modelo<<" Lotado!" << endl;
    }
    else
    {
        this->registro = new Passenger[capacidade];
        string aux;    
        do  {
            cout << "Nome do Tripulante: "<< capacidade << endl; 
            getline( cin, aux);
            registro[capacidade].setNome(aux);
            capacidade--;
            } while ( capacidade >= 0);
    }
}

void JatoComercial::getEmbarque(){
    if ( capacidade == 15 )    
        {
         cout <<"Vazio" << endl;
        }
    else
        {
            for ( capacidade >=0; capacidade -- ){
            registro[capacidade].getNome();}
        }
}
