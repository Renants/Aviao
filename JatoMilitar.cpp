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

void JatoMilitar::alterarParaquedistas(){
    if ( JatoMilitar.capacidade != 0 ){
    cout <<"Paraquedista atual: ";
    getline(cin,Paraquedista);
	Paraquedistas.push_back(Paraquedista);
    JatoMilitar.capacidade --;
    }
    else
    {
        cout << "Capacidade maxima atingida" << end;
    }
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

void JatoMilitar::alterarAlcance(){
	int op;
	cout <<"Distancia do destino em km: " << endl;
	if ( noar == false)
 	{
		do{
		cin >> this->alcance;
		if ( alcance > autonomia*velocidade ){
			cout <<"Distancia excede a autonomia do Jatinho..." << endl;
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

void JatoMilitar::decolar(){
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

void JatoMilitar::alterarVoo(){
	if ( noar == false){
		cout <<"Erro"  Jatinho ainda em solo... " << endl;
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

void JatoMilitar::alterarTransponder(){
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

void JatoMilitar::visor(){
	int aux;
	do{
	
	cout << "\nDisplay de Instrumentos: \n"
		 << "Ligar Gps			-1-\n" 
		 << "Ligar Transponder		-2-\n" 
		 << "Ligar Piloto automatico		-3-\n" 
		 << "Iniciar decolagem	 	-4-\n"
		 << "Alterar parametros de voo	-5-\n"
		 << "Mostrar Radar      		-6-\n"
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
			
                
           default: 
				cout << "Esclolha Invalida..." << endl;}	 
	} while ( aux != 0);
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

void JatoMilitar::defDispararp(){
    if ( projeteis = 0){
        cout <<"Sem municao!" << endl;
    }
    else{
            cout <<"Disparo feito!" << endl;
            this->projeteis--;
            cout << projeteis; 
        }
}
