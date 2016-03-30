#ifndef JATOMILITAR_H
#define JATOMILITAR_H
#include "Jatinho.h"
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

class JatoMilitar : public Jatinho // classe concreta
{   friend ostream& operator<<(ostream &, const JatoMilitar &);
public: 
    JatoMilitar();
    ~JatoMilitar();
    JatoMilitar(int = 600, int = 5, int =  15);
   	const JatoMilitar &operator=(const JatoMilitar &);
    bool operator==(const JatoMilitar &) const;
    JatoMilitar( const JatoMilitar & );
    virtual void    visorMensagem();
    virtual void    alterarGps();
    virtual void    alterarPilotoauto();
    virtual void    alterarAlcance ();
    virtual void    decolar();
    virtual void    alterarVoo();
    virtual void	alterarVelocidade();
    virtual void    regEmbarque(); // Aloca dinamicamente os tripulantes;
    virtual void    getEmbarque();  
    virtual void    alterarTransponder();    	
    void            reabastecer();
    void            defDispararp();
        
private:
bool reabastecimento;
int projeteis;

};

#endif // JATOMILITAR_H
