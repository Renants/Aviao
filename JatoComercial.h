#ifndef JATOCOMERCIAL_H
#define JATOCOMERCIAL_H
#include<iostream>
#include<string>
using namespace std;
class JatoComercial : public Jatinho
{
public:
	
	bool operator==(const JatoComercial &) const;
	JatoComercial &operator=(const JatoComercial &);
	JatoComercial(int = 500, int 5);
    ~JatoComercial();
    void alterarInternet();
	void alterarRadio();
	string retModelo();


private: 
	bool radio;
    bool internet;
	string modelo;
	
};

#endif // JATOCOMERCIAL_H
