#include"Airplane.h"
#ifndef DRONE_H
#define DRONE_H
#include <iostream>
#include <string>
using namespace std;

class Drone: public Airplane
{
     friend ostream &operator<<(ostream &,const Drone &);
public:
	const Drone &operator=(const Drone &);
    bool operator==(const Drone &) const;
	
	Drone(int = 800, int = 5);
    Drone( const Drone & );
    ~Drone();
	Drone();
    void alterarDispararb();
    void alterarDispararm();
	
    
    private:
    int misseis;
    int balas; 
};
#endif