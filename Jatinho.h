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
    virtual void    regEmbarque() = 0; // Aloca dinamicamente os passageiros;
    virtual void    getEmbarque() = 0;  
    virtual void    alterarTransponder() = 0;    	
protected:
    string modelo;
    int capacidade;
    Passenger *registro;
};



#endif // JATINHO_H
