#ifndef JATINHO_H
#define JATINHO_H
#include"Airplane.h"
#include "Passenger.h"
class Jatinho : public Airplane
{
friend ostream &operator <<( ostream &, const Jatinho & );
public:
    Jatinho( const Jatinho & );
    Jatinho();
    ~Jatinho();
    void    setPassenger();
    void    getPassenger();
        
private:
    int capacidade;
    Passenger *registro;
};



#endif // JATINHO_H
