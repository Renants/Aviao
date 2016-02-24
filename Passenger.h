#ifndef PASSENGER_H
#define PASSENGER_H
#include "Data.h"
#include <string>
using namespace std;
class Passenger
{
    public:
    Passenger();
    string  getName() const;
    void    setName();
    
    private:
        string  name;
        int     freeseats;
        Data    embarque;
};

#endif // PASSENGER_H
