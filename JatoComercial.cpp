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

const JatoComercial &operator=(const JatoComercial &jatocp){
		internet =jatocp.internet;
		radio =jatocp.radio;
		
}

bool Jatinho::operator==(const Jatinho & jatocpcmp) const
{
    if( jatocpcmp.internet != internet) return false;
    if( jatocpcmp.radio!= radio ) return false;
    if( jatocpcmp.modelo != modelo ) return false;
    if( jatocpcmp.blackbox.print() != blackbox.print() ) return false;
    return true;
}

JatoComercial::~JatoComercial()
{
	cout << "Destrutor chamado para Jato Comercial" << endl;
}

void JatoComercial::definternet(){
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