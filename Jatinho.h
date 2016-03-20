#ifndef JATINHO_H
#define JATINHO_H
#include"Airplane.h"
#include "Passenger.h"
#include <vector>
using std::ostream;
class Jatinho : public Airplane
{
     
public:
	bool operator==(const Airplane &) const;
	Airplane &operator=(const Airplane &);
	Jatinho( const Jatinho & );
    Jatinho(int = 1000, int = 5);
    ~Jatinho();
    void    regPassageiros();
    void    getPassenger();
	int		getaBordo();
	void visorMenssagem();
    void getEscala();
        
private:
    int capacidade;
	int abordo;
    Passenger *registro;
	vector <string> Escalas;
};



#endif // JATINHO_H
