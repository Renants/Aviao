#ifndef RAPTOR_H
#define RAPTOR_H
#include "Drone.h"
#include <string>
#include <iostream>
class Raptor: public Drone // classe concreta
{ friend ostream& operator<<(ostream &, const Raptor &);
public:
    Raptor( int 1000,int 7);
    ~Raptor();
    const Raptor &operator=(const Raptor &);
    bool operator==(const Raptor &) const;
	Drone(int , int );
    Raptor( const Raptor & );
    virtual void defDispararp();
    virtual void defDispararm();
	virtual void visor();
    virtual void visorMensagem();
	virtual void adicionarAlvos();
    virtual void alterarGps();
    virtual void alterarPilotoauto();
    virtual void alterarAlcance ();
    virtual void alterarVelocidade();
    virtual void decolar();
    virtual void alterarVoo();
    	    void alterarStealth();
    virtual void retAmmunition()
	
private:
    bool stealth;
    string modelo;
};

#endif // RAPTOR_H
