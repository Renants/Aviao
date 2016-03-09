#include"Airplane.h"
#ifndef DRONE_H
#define DRONE_H
#include <iostream>
using namespace std;

class Drone: public Airplane
{
     friend ostream &operator<<(ostream &,const Drone &);
public:
    Drone(int = 800, int = 5);
    Drone( const Drone & );
    ~Drone();
    void defFirebala();
    void defFiremissil();
    
    private:
    int misseis;
    int balas; 
};
#endif