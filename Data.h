#ifndef DATA_H
#define	DATA_H

class Data
{ 
public:
    
    Data( int = 1, int = 1, int = 2000 );
    void print() const;
    // funçoes set...
    setDay( int); 
    setMonth( int);
    setYear( int);
    //funçoes get...
    int getDay();
    int getMonth();
    int getYear();
    
    int Checkday( int ) const;
    
private:
    
    int day;
    int month;
    int year;
    
    


};

#endif

