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
		void	DisplayMessage() const;
		void	Gps();
		void	Transponder();
		void	Piloto_auto();
		void	Speed ();
		void	Distance ();
		void	TakeOff();
		void	ChangeFlight();
		float	getSpeed() const;	
		float	getDistance() const;
		float	getAux()const;
		void	Wait()const;
       	void	static	getRadar();
        void    setPassenger();
        void    getPassenger();
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
        int     freeseats;
        Passenger *registro;
    
};

#endif
