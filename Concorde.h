#ifndef CONCORDE_H
#define CONCORDE_H

class Concorde : class Jatinho 
{
     friend ostream &operator<<(ostream &,const Concorde &);
public:
    Concorde(int 1500, int 6);
   Concorde( const Concorde & );
    ~Concorde();

private:
    
};

#endif // CONCORDE_H
