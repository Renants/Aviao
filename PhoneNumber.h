#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include<string>
#include<iostream>
using namespace std;
class PhoneNumber
{
    friend ostream & operator<< ( ostream&, const PhoneNumber & );
    friend istream & operator>> ( istream&, PhoneNumber &);
	
    public:
        PhoneNumber();
    private:
        string areacode;
        string  exchange;
        string  line;
};

#endif // PHONENUMBER_H
