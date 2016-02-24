#ifndef AIRPLANE_H
#define AIRPLANE_H
#include<string>
#include "Data.h"
#include "Passenger.h"
using namespace std;
class Airplane
{
	
	public:
		~Airplane	 ();
		Airplane	 ();
		Airplane	 ( const Airplane & );
		void	Display();
		void	DisplayMessage();
		void	Gps();
		void	Transponder();
		void	Piloto_auto();
		void	Speed ();
		void	Distance ();
		void	TakeOff();
		void	ChangeFlight();
		float	getSpeed();	
		float	getDistance();
		float	getAux();
		void	Wait();
       	void	static	getRadar();
        void    addPassenger( string & );
        void    showPassengers();
        void    blackboxResgister( int, int, int);
				
	private:
		
		bool	gps;
		bool	piloto_auto;
		bool	on_air;
		float	speed;
		float	distance;
		float	aux;
		bool	transponder;
        static  int radar;
		Data    blackbox;
        Passenger *registro;
};

#endif
