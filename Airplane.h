#ifndef AIRPLANE_H
#define AIRPLANE_H
#include<string>
#include "Data.h"
using namespace std;
class Airplane
{
    friend ostream &operator<<(ostream &,const Airplane &);
public:
		Airplane( int = 700, int = 5);
        ~Airplane();
        
        bool operator==(const Airplane &) const;
        Airplane &operator=(const Airplane &);
        void	visor();
		void	visorMenssagem() const;
		
        void	defGps();
		void	defTransponder();
		void	defPilotoauto();
		
        void	defAlcance ();
		float	retAlcance() const;
        
        void	defDecolar();
		void	defAlterarvoo();
		
        void	defVelocidade();
		float	retVelocidade() const;	
		
        void    defAutonomia();
        float   retAutonomia() const;
		
        float	retAux()const;
		void	Wait()const;
       	void	static	retRadar();
        void    blackboxResgister( int, int, int);
				
	protected:
		Data    blackbox;
        bool	gps;
		bool	pilotoauto;
		bool	noar;
		bool	transponder;
        static  int radar;
		float   autonomia;
        float   velocidade;
        float	alcance;
        float	aux;
		float   vmax;
        string  name;
};

#endif
