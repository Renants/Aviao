#include "Airplane.h"
#ifndef DRONE_H
#define DRONE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Drone: public Airplane
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
	virtual void visor() = 0;
    virtual void visorMensagem() =0;
	virtual void adicionarAlvos() = 0 ;
    string retAlvos();
    virtual void alterarGps() = 0;
    virtual void alterarPilotoauto() = 0;
    virtual void alterarAlcance () = 0;
    virtual void alterarVelocidade() = 0;
    virtual void decolar() = 0;
    virtual void alterarVoo() = 0;
	void retAmmunition();	
   
protected:
    int misseis;
    int projeteis;
	vector<string> alvosVector;
    string alvos;
};
#endif