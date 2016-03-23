#ifndef JATINHO_H
#define JATINHO_H
#include"Airplane.h"
#include "Passenger.h"
#include <vector>
#include <string>
using namespace std;
class Jatinho : public Airplane
{
        friend ostream& operator<<(ostream &, const Jatinho &);
public:
	bool operator==(const Jatinho &) const;
    const Jatinho &operator=(const Jatinho &);
	Jatinho( const Jatinho & );
    Jatinho(int = 1000, int = 5);
    ~Jatinho();
            void    regPassageiros(); // Aloca dinamicamente os passageiros;
            void    getPassenger();  
	virtual void    visorMensagem(); // classe virtual
    virtual void    visor();
    virtual void    alterarEscalas();
    virtual void    alterarGps();
    virtual void    alterarPilotoauto();
    virtual void    alterarAlcance ();
    virtual void    decolar();
    virtual void    alterarVoo();
    virtual void	alterarVelocidade();
            void    alterarTransponder();    
private:
    int capacidade;
	Passenger *registro;
	
};



#endif // JATINHO_H
