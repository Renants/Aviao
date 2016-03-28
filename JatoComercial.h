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
class JatoComercial : public Jatinho // classe abstrata
{
public:
	
	bool operator==(const JatoComercial &) const;
	const JatoComercial &operator=(const JatoComercial &);
	JatoComercial(int = 800, int = 5, int =  7);
    ~JatoComercial();
    JatoComercial();
    void    regPassageiros(); // Aloca dinamicamente os passageiros;
    void    getPassenger();  
	virtual void    visorMensagem() = 0;
    virtual void    visor() = 0;
    virtual void    alterarEscalas() = 0;
    virtual void    alterarGps() = 0;
    virtual void    alterarPilotoauto() = 0;
    virtual void    alterarAlcance () = 0;
    virtual void    decolar() = 0;
    virtual void    alterarVoo() = 0;
    virtual void	alterarVelocidade() = 0;
    virtual void    alterarTransponder() = 0;
    
private: 
	string escalas;
    vector <string> escalasVector;
    Passenger *registro;
    
};

#endif // JATOCOMERCIAL_H
