#ifndef JATINHO_H
#define JATINHO_H
#include "Airplane.h"
#include <vector>
#include <string>
using namespace std;
class Jatinho : public Airplane // classe abstrata
{
       // friend ostream& operator<<(ostream &, const Jatinho &);
public:
	bool operator==(const Jatinho &) const;
    const Jatinho &operator=(const Jatinho &);
	Jatinho( const Jatinho & );
    Jatinho(int , int, int );
    ~Jatinho();
    string retModelo();
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

protected:
    string modelo;
    int capacidade;

};



#endif // JATINHO_H
