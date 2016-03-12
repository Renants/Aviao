#include "JatoComercial.h"


friend ostream &operator<<(ostream &,const JatoComercial &Jatoprint){
	output << "Internet a bordo: " << Jatoprint.internet << "Cominicação com torre de controle:" << Jatoprint.radio << endl;   
    return output;
}



JatoComercial::JatoComercial(int vl,int at)
	: Jatinho(vl,at)
{
    internet	= false;
	radio		= false;
	modelo		= "Helios One";
}

const JatoComercial &operator=(const JatoComercial &jatocp){
	 static_cast<Airplane> (*this) = static_cast<Airplane> (jatinhocp);
		internet =jatocp.internet;
		internet =jatocp.radio;
}

bool Jatinho::operator==(const Jatinho &jatocpcmp) const
{
    if((static_cast<Airplane> (*this) == static_cast<Airplane>(jatocpcmp) && retModelo() == jatocpcmp.modelo ){  
        return true;
    }
    else
    {
        return false;
    }
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