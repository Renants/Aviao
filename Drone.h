#include"Airplane.h"
#ifndef DRONE_H
#define DRONE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Drone: public Airplane
{
    friend ostream& operator<<(ostream &, const Drone &);
public:
	const Drone &operator=(const Drone &);
    bool operator==(const Drone &) const;
	Drone(int = 800, int = 5);
    Drone( const Drone & );
    ~Drone();
	Drone();
    void defDispararp();
    void defDispararm();
	virtual void visor();
    virtual void visorMensagem();
	void adicionarAlvos();
    string retAlvos();
    virtual void alterarGps();
    virtual void alterarPilotoauto();
    virtual void alterarAlcance ();
    virtual void alterarVelocidade();
    virtual void decolar();
    virtual void alterarVoo();
	void retAmmunition();	
    private:
    int misseis;
    int projeteis;
	vector<string> alvosVector;
    string alvos;
};
#endif