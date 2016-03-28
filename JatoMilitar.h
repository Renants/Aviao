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
    JatoMilitar(int = 600, int = 5, int =  10);
   	const JatoMilitar &operator=(const JatoMilitar &);
    bool operator==(const JatoMilitar &) const;
    JatoMilitar( const JatoMilitar & );
    virtual void    visorMensagem();
    virtual void    visor();
    virtual void    alterarParaquedistas();
    virtual void    alterarGps();
    virtual void    alterarPilotoauto();
    virtual void    alterarAlcance ();
    virtual void    decolar();
    virtual void    alterarVoo();
    virtual void	alterarVelocidade();
    virtual void    alterarTransponder();
    void            reabastecer();
    void            defDispararp();

private:
bool reabastecimento;
int projeteis;
vector<string> Paraquedistas;
    string Paraquedista;
};

#endif // JATOMILITAR_H
