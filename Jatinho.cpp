#include "Jatinho.h"
#include<iostream>
#include<iomanip>



Jatinho::Jatinho( int = vm, int = aut )
    : Airplane(vm,aut) // Velocidade maxmima do drone e autonomia
{
    capacidade = 5;
}

const Jatinho &operator=(const Jatinho &jatinhocp){
	
		capacidade =jatinhocp.capacidade;
}

bool Jatinho::operator==(const Jatinho &jatinhocmp) const
{
    if( jatinhocmp.capacidade != capacidade ) return false;
    if( jatinhocmp.abordo!= abordo ) return false;
    if( jatinhocmp.vmax != vmx) return false;
    if( jatinhocmp.blackbox.print() != blackbox.print() ) return false;
    return true;
}

Jatinho::Jatinho(const Jatinho &jato){
    capacidade = jato.capacidade;
    velocidade = jato.velocidade;
    autonomia  = jato.autonomia;
    alcance    = jato.alcance;
}

void Jatinho::regPassageiros(){
    if ( capacidade ==0){
        cout <<"Sem vagas" << endl;
    }
    else
    {
        registro= new Passenger[capacidade];
        string aux;    
        do  {
            cout << "Nome: "<< capacidade << endl; 
            getline( cin, aux);
            registro[capacidade].setNome(aux);
            capacidade--;
			abordo ++;
            } while ( capacidade >= 0);
    }
}

void Jatinho::getPassenger(){
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
Jatinho::~Jatinho()
{
    cout <<"\nDestrutor chamado para Jatinho..." << endl;
    cout <<"\nDestrutor chamado para *Resgistro..." << endl;
        delete [] registro;
}

int Jatinho::getaBordo(){
	return abordo; 
}

void Jatinho::visorMenssagem(){
	Jatinho.Wait();
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
	cout << "A bordo: " << Jatinho.getaBordo() << endl;
	
}