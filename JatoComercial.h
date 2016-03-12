#ifndef JATOCOMERCIAL_H
#define JATOCOMERCIAL_H
using std::ostream;
using std::string;
class JatoComercial : class Jatinho
{
	friend ostream &operator<<(ostream &,const Jatinho &);
public:
	
	bool operator==(const JatoComercial &) const;
	JatoComercial &operator=(const JatoComercial &);
	JatoComercial(int = 500, int 5);
    ~JatoComercial();
    void alterarInternet();
	void alterarRadio();
	string retModelo();

private: 
	bool radio;
    bool internet;
	string modelo;
};

#endif // JATOCOMERCIAL_H
