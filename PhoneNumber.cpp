#include "PhoneNumber.h"
#include<iostream>
#include<iomanip>
using namespace std;
PhoneNumber::PhoneNumber()
{
}

ostream &operator <<( ostream &output , const PhoneNumber &number ){
    output  << "(" << number.areacode << ")"
            << number.exchange <<"-" << number.line;
    return output;
}
istream &operator >>( istream &input, PhoneNumber &number){
    input.ignore();
    input>> setw(3) >> number.areacode;
    input.ignore(2);
    input>> setw(3) >> number.exchange;
    input.ignore();
    input>> setw(4) >> number.line;
    
    return input;
}