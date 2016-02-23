#include "Data.h"

#include <iostream>
using std::cout;

Data::Data(int d, int m, int y) 
{
    if ( m > 0 && m <= 12 ) // validate the month
        month = m;
    
    if ( y < 0 )
        year = 2000;
    else
        year = y;
   
    day = Checkday(d);

}

Data::setDay( int d ){
     day = Checkday(d);
}

Data::setMonth( int m ){
     if ( m > 0 && m <= 12 ) // validate the month
        month = m;
}

Data::setYear( int y ){
     if ( y < 0 )
        year = 2000;
    else
        year = y;
}

void Data::print() const
{
   cout << day << '/' << month << '/' << year;
   
}

int Data::Checkday(int testday ) const
{
    static const int diasPorMes[ 13 ] = 
       { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    if ( testday > 0 && testday <= diasPorMes[ month ] )
        return testday;
    
    if ( month == 2 && testday == 29 && ( year % 400 == 0 ||
            ( year % 4 == 0 && year % 100 != 0 ) ) )
        return testday;
    
    cout << "Dia invalido (" << testday << ") configurado para 1.\n";
    return 1; 

    
}