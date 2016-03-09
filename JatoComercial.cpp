#include "JatoComercial.h"

JatoComercial::JatoComercial()
{
    internet = false;
}

JatoComercial::~JatoComercial()
{
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
