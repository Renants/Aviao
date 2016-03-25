#ifndef AIRPLANE_H
#define AIRPLANE_H
#include<string>
#include "Data.h"
using std::ostream;
using namespace std;
class Airplane
{
  
public:
		Airplane( const Airplane &);
		Airplane( int , int );
        ~Airplane();
        Airplane();
        bool operator==(const Airplane &) const;
        Airplane &operator=(const Airplane &);
        virtual void	visor() = 0;
		
		virtual void visorMensagem() = 0;
		
        virtual void	alterarGps() = 0;
		virtual void	alterarTransponder() = 0;
		virtual void	alterarPilotoauto() = 0;
		
        virtual void	alterarAlcance () = 0;
		float	retAlcance() const;
        
        virtual void	decolar() = 0;
		virtual void	defAlterarvoo() = 0 ;
		
        virtual void	alterarVelocidade() = 0;
		float	retVelocidade() const;	
		
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
		float   velocidade;
        float   autonomia;
        float	alcance;
        float	aux;
		float   vmax;
	};

#endif
