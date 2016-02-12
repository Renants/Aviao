#ifndef AIRPLANE_H
#define AIRPLANE_H
#include<string>
using namespace std;
class Airplane
{
	
	public:
		Airplane ();
		void setDisplay();
		void getDisplay();
		void setGps();
		void setTransponder();
		void set_Piloto_auto();
		void setSpeed ();
		void setDistancia ();
		void autonomia();
		void setDecolar();
		void setAlterarvoo();
		float  getSpeed();	
		float  getDistancia();
		float  getAux();
		void   Wait();
	private:
		bool  Gps;
		bool  Transponder;
		bool  Piloto_auto;
		bool  On_air;
		float Speed;
		float Distancia;
		float Aux;
		int   Autonomia;
		
};

#endif
