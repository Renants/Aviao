#include "Passenger.h"

Passenger::Passenger()
{
    name = "";
}

void Passenger::getName(){
    for ( int i=1; i<= freeseats; i++)
        cout"Name: " << name[i];
}

void Passenger::setName( string &n ){
    name = n;       
}
