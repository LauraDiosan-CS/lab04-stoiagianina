#include <string.h>
#include <iostream>

class Produs {
private:
	int pret;
	std::string nume;
	std::string data;
public:
	Produs();
	Produs(std::string nume, std::string data, int pret);
	Produs(const Produs &p);
	~Produs();
	int getPret();
	std::string getNume();
	std::string getData();
	void setPret(int p);
	void setNume(std::string n);
	void setData(std::string d);
};
void teste();