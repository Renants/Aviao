#include "Airplane.h"
#ifndef DRONE_H
#define DRONE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Drone: public Airplane // classe abstrata
{
    
public:
	const Drone &operator=(const Drone &);
    bool operator==(const Drone &) const;
	Drone(int , int );
    Drone( const Drone & );
    ~Drone();
	Drone();
    virtual void defDispararp() = 0;
    virtual void defDispararm() = 0;
	virtual void visorMensagem() =0;
	virtual void adicionarAlvos() = 0 ;
    string retAlvos();
    void retAmmunition() = 0;	
   
protected:
    int misseis;
    int projeteis;
	vector<string> alvosVector;
    string alvos;
};
#endif
