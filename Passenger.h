#ifndef PASSENGER_H
#define PASSENGER_H
#include <iostream>
#include <string>

using namespace std;

// declaração da classe Cliente
class Passenger{
  public:
    Passenger();
    void getNome();
    void setNome(string);
  private:
    string nome;
};

#endif // PASSENGER_H
