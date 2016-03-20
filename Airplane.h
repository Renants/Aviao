#ifndef AIRPLANE_H
#define AIRPLANE_H
#include<string>
#include "Data.h"
using std::ostream;
using namespace std;
class Airplane
{
  
public:
		Airplane( const Airplane &, const Data &,const string & );
		Airplane( int = 700, int = 5);
        ~Airplane();
        Airplane();
        bool operator==(const Airplane &) const;
        Airplane &operator=(const Airplane &);
        void	visor();
		
		virtual void visorMenssagem() = 0;
		
        void	alterarGps();
		void	alterarTransponder();
		void	alterarPilotoauto();
		
        void	alterarAlcance ();
		float	retAlcance() const;
        
        void	decolar();
		void	defAlterarvoo();
		
        void	alterarVelocidade();
		float	retVelocidade() const;	
		
        void    alterarAutonomia();
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
	};

#endif
