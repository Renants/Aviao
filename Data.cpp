#include "Data.h"
#include<iostream>
using namespace std;
Data::Data(int dy, int mn, int yr)
{
	day = Checkday ( dy );
	if ( mn > 0 && mn <= monthsyear ){
		month = mn;
	}
	else{ 
	cout <<"Mes invalido..." << endl;
	month = 1;
	}
	
	if ( yr > 0 && yr <= 3000 ){
		year = yr;
	}
	else{ 
	cout <<"Ano invalido..." << endl;
	year = 2000;
	}
	
	cout << endl;
}

int Data::Checkday( int testday ) const {
	static const int dayspermonth [monthsyear] = { 31,28,31,30,31,30,31,31,30,31,30,31};
		if ( testday > 0 && testday <= dayspermonth[month] ){
			return testday;
		}
		else{
			cout << "Dia Invalido..." << endl;
			return 1;
		}
}

void Data::Print() const{
	cout << day <<'/' << month <<'/' << year << endl;
}

Data::~Data(){
	cout <<"destrutror chamado para ";
	Print();
	cout << endl;
}
