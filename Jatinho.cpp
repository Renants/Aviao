#include "Jatinho.h"
#include<iostream>
#include<iomanip>

ostream &operator<<(ostream &output,const Airplane &Jatinhoprint)
{
    output << "Capacidade: " << Jatinhoprint.capacidade << endl;   
    return output;
}

Jatinho::Jatinho( int = vm, int = aut )
    : Airplane(vm,aut) // Velocidade maxmima do drone e autonomia
{
    capacidade = 5;
}

const Jatinho &operator=(const Jatinho &jatinhocp){
	 static_cast<Airplane> (*this) = static_cast<Airplane> (jatinhocp);
		capacidade =jatinhocp.capacidade;
}

bool Jatinho::operator==(const Jatinho &jatinhocmp) const
{
    if((static_cast<Airplane> (*this) == static_cast<Airplane>(jatinhocmp) && getPassenger() == jatinhocp.abordo){  
        return true;
    }
    else
    {
        return false;
    }
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
