#include "Passenger.h"
#include<iostream>

Passenger::Passenger(){}


void Passenger::getNome(){
  cout<<"\n" << nome;
}

// define o nome do cliente
void Passenger::setNome(string nome){
  this->nome = nome;
}
