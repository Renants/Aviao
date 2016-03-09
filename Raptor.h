#ifndef RAPTOR_H
#define RAPTOR_H
#include "Drone.h"
class Raptor : class Drone
{
     friend ostream &operator<<(ostream &,const Raptor &);
public:
    Raptor(int 700, int 10);
    ~Raptor();
    Raptor( const Raptor & );
    void foto();

    

};

#endif // RAPTOR_H
