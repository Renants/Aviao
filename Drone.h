#include"Airplane.h"
#ifndef DRONE_H
#define DRONE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Drone: public Airplane
{

public:
	const Drone &operator=(const Drone &);
    bool operator==(const Drone &) const;
	Drone(int = 800, int = 5);
    Drone( const Drone & );
    ~Drone();
	Drone();
    void alterarDispararb();
    void alterarDispararm();
	void visorMenssagem();
	void adicionarAlvos(string);
    
    private:
    int misseis;
    int balas;
	vector <string> Alvos;
};
#endif