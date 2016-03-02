#ifndef JATINHO_H
#define JATINHO_H
#include <iostream>
using namespace std;

class Drone: public Airplane
{
public:
    jatinho();
    ~jatinho();
    
    
private:
    int autonomia;
    int capacidade;
    int velocidade;
    int alcance;
}



#endif