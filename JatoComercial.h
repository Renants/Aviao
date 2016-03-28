#ifndef JATOCOMERCIAL_H
#define JATOCOMERCIAL_H
#include "Passenger.h"
#include "Jatinho.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <windows.h>
using namespace std;
class JatoComercial : public Jatinho // classe concreta
{
public:
	
	bool operator==(const JatoComercial &) const;
	const JatoComercial &operator=(const JatoComercial &);
	JatoComercial(int = 800, int = 5, int =  7);
    ~JatoComercial();
    JatoComercial();
    void    regPassageiros(); // Aloca dinamicamente os passageiros;
    void    getPassenger();  
    virtual void    visorMensagem();
    virtual void    visor();
    void    alterarEscalas();
    virtual void    alterarGps();
    virtual void    alterarPilotoauto();
    virtual void    alterarAlcance ();
    virtual void    decolar();
    virtual void    alterarVoo();
    virtual void	alterarVelocidade();
    virtual void    alterarTransponder();
    
private: 
	string escalas;
    vector <string> escalasVector;
    Passenger *registro;
    
};

#endif // JATOCOMERCIAL_H
