
#ifndef DATA_H
#define	DATA_H

class Data 
{
public:
    static const int monthsyear = 12;
    Data( int = 1, int = 1, int = 2000);
    ~Data();
    void Print() const;
    
private:
    
    int day;
    int month;
    int year;
    
    int Checkday (int) const;


};

#endif

