#ifndef RAPTOR_H
#define RAPTOR_H
#include "Drone.h"
#include <string>
#include <iostream>
class Raptor: public Drone
{ friend ostream& operator<<(ostream &, const Raptor &);
public:
    Raptor( int 1000,int 7);
    ~Raptor();
    const Raptor &operator=(const Raptor &);
    bool operator==(const Raptor &) const;
	Drone(int , int );
    Raptor( const Raptor & );
    virtual void defDispararp() = 0;
    virtual void defDispararm() = 0;
	virtual void visor() = 0;
    virtual void visorMensagem() =0;
	virtual void adicionarAlvos() = 0 ;
    virtual void alterarGps() = 0;
    virtual void alterarPilotoauto() = 0;
    virtual void alterarAlcance () = 0;
    virtual void alterarVelocidade() = 0;
    virtual void decolar() = 0;
    virtual void alterarVoo() = 0;
    	    void alterarStealth();
	
private:
    bool stealth;

};

#endif // RAPTOR_H
