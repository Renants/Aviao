#include"Airplane.h"
#ifndef DRONE_H
#define DRONE_H
#include <iostream>
using namespace std;

class Drone: public Airplane
{
friend ostream &operator <<( ostream &, const Drone & );
    public:
    Drone( const Drone & );
    ~Drone();
    void Fire();
    void Firem();
    
    private:
    int missile;
    int velocidade;
    int autonomia;
    int alcance;
        
};
#endif