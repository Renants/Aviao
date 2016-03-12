#ifndef JATINHO_H
#define JATINHO_H
#include"Airplane.h"
#include "Passenger.h"
using std::ostream;
class Jatinho : public Airplane
{
     friend ostream &operator<<(ostream &,const Jatinho &);
public:
	bool operator==(const Airplane &) const;
	Airplane &operator=(const Airplane &);
	Jatinho( const Jatinho & );
    Jatinho(int = 1000, int = 5);
    ~Jatinho();
    void    regPassageiros();
    void    getPassenger();
	int		getaBordo();
    //Criar um método que faça algo
    //registarPassageiros
        
private:
    int capacidade;
	int abordo;
    Passenger *registro;
};



#endif // JATINHO_H
