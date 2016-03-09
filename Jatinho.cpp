#include "Jatinho.h"
#include<iostream>
#include<iomanip>

Jatinho::Jatinho()
    : Airplane(1000,5) // Velocidade maxmima do drone e autonomia
{
    capacidade = 5;
}


Jatinho::Jatinho(const Jatinho &jato){
    capacidade = jato.capacidade;
    velocidade = jato.velocidade;
    autonomia  = jato.autonomia;
    alcance    = jato.alcance;
}

void Jatinho::setPassenger(){
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


