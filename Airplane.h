#ifndef AIRPLANE_H
#define AIRPLANE_H
#include<string>
using namespace std;
class Airplane
{
	
	public:
		~Airplane ();
		Airplane ();
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
		int 	static	getairplane();
		static  int airplane;
		
	private:
		
		bool	gps;
		bool	piloto_auto;
		bool	on_air;
		float	speed;
		float	distance;
		float	aux;
		bool	transponder;
		
};

#endif
