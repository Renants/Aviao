#include"Airplane.h"
#ifndef DRONE_H
#define DRONE_H
#include <iostream>
using namespace std;

class Drone: public Airplane
{
public:
    Drone();
    Drone( const Drone & );
    ~Drone();
    void defFirebala();
    void defFiremissil();
    
    private:
    int misseis;
    int balas; 
};
#endif