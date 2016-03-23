#include "JatoComercial.h"
#include<iostream>
#include<string>
using namespace std;

JatoComercial::JatoComercial(int vl,int at)
	: Jatinho(vl,at)
{
    internet	= false;
	radio		= false;
	modelo		= "Helios One";
}

const JatoComercial &JatoComercial::operator=(const JatoComercial &OldjatoComercial){
		this->internet =OldjatoComercial.internet;
		this->radio =OldjatoComercial.radio;
		
}

bool JatoComercial::operator==(const JatoComercial & OldjatoComercial) const
{
    if( OldjatoComercial.internet != internet) return false;
    if( OldjatoComercial.radio!= radio ) return false;
    if( OldjatoComercial.modelo != modelo ) return false;
    return true;
}

JatoComercial::~JatoComercial()
{
	cout << "Destrutor chamado para Jato Comercial" << endl;
}

void JatoComercial::alterarInternet(){
    if ( internet == false){
        cout << "Internet disponivel para os passageiros"<<endl;
        internet == true;
        }
    
    else{
        internet == false;
        cout << "Internet indisponivel"<<endl;
    }
        
}

string JatoComercial::retModelo(){
	return modelo;
}

void JatoComercial::alterarRadio(){
	if ( radio == false){
        cout << "Comunicação via radio estabelecida"<<endl;
       radio == true;
        }
    
    else{
       radio == false;
        cout << "Radio desligado"<<endl;
    }
}