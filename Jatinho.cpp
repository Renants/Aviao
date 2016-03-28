#include "Jatinho.h"
#include<iostream>
#include<iomanip>
#include<windows.h>
using namespace std;


Jatinho::Jatinho( int velocidademax, int autonomia,int jcapacidade )
    : Airplane(velocidademax,autonomia)  // Velocidade maxmima do drone e autonomia
{
    this->capacidade = jcapacidade;
}

const Jatinho &Jatinho::operator=(const Jatinho &Oldjatinho){
	
		this->capacidade =Oldjatinho.capacidade;
}

/*bool Jatinho::operator==(const Jatinho &cmp) const{
    if( cmp.capacidade != Jatinho.capacidade ) return false;
    if( cmp.vmax != Jatinho.vmax) return false;
    
    return true;
} */

/*ostream& operator<<(ostream &output, const Jatinho &display)
{
	output << "\n Basic Information: "	display.visorMensagem();
    return output;
}*/

Jatinho::Jatinho(const Jatinho &Oldjatinho)
    :Airplane(Oldjatinho)
    {    
    capacidade = Oldjatinho.capacidade;
    
}

Jatinho::~Jatinho(){
}
