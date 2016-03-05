#include "Jatinho.h"
#include<iostream>
#include<iomanip>
friend ostream &operator <<( ostream & out, const Jatinho &jato ){
    cout << "Aucance de voo" << alcance << endl;
    return out;
}

Jatinho::Jatinho()
 {
    capacidade = 5;   //passageiros
    velocidade = 700; // km/h
    autonomia  = 4; //horas
    alcance    = autonomia * velocidade;

}
Jatinho::Jatinho(const Jatinho &jatinho){
    capacidade = jatinho.capacidade;
    velocidade = jatinho.velocidade;
    autonomia  = jatinho.autonomia;
    alcance    = jatinho.alcance;
}

void Jatinho::setPassenger(){
    if ( capacidade ==0){
        cout <<"No vacancy" << endl;
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
         cout <<"Empty" << endl;
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


