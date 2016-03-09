#ifndef JATOCOMERCIAL_H
#define JATOCOMERCIAL_H

class JatoComercial : class Jatinho
{
public:

    JatoComercial();
    JatoComercial( const JatoComercial & );
    ~JatoComercial();
    void defInternet();
    

private: 

    bool internet;
};

#endif // JATOCOMERCIAL_H
