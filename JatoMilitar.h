#ifndef JATOMILITAR_H
#define JATOMILITAR_H

class JatoMilitar
public:
    JatoMilitar();
    ~JatoMilitar();
    virtual void    visorMensagem() = 0;
    virtual void    visor() = 0;
    virtual void    alterarEscalas() = 0;
    virtual void    alterarGps() = 0;
    virtual void    alterarPilotoauto() = 0;
    virtual void    alterarAlcance () = 0;
    virtual void    decolar() = 0;
    virtual void    alterarVoo() = 0;
    virtual void	alterarVelocidade() = 0;
    virtual void    alterarTransponder() = 0;

private
bool reabastecimento;
int misseis;
int projeteis;
vector<string> alvosVector;
string alvos;   
};

#endif // JATOMILITAR_H
