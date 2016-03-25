#ifndef JATINHO_H
#define JATINHO_H
#include "Airplane.h"
#include <vector>
#include <string>
using namespace std;
class Jatinho : public Airplane
{
        friend ostream& operator<<(ostream &, const Jatinho &);
public:
	bool operator==(const Jatinho &) const;
    const Jatinho &operator=(const Jatinho &);
	Jatinho( const Jatinho & );
    Jatinho(int , int, int );
    ~Jatinho();
    string retModelo();

protected:
    string modelo;
    int capacidade;

};



#endif // JATINHO_H
