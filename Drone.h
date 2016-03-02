#ifndef DRONE_H
#define DRONE_H
#include <iostream>
using namespace std;

class Drone: public Airplane
{
public:
    Drone();
    ~Drone();
    void Fire();
    void photograph;
    
private:
     int ammunition;
     int missile;
        
}



#endif