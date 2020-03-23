#include "Cheltuieli.h"
#include <assert.h>
Produs::Produs()
{

}
Produs::Produs(std::string n, std::string d,int p)
{
	this->nume = n;
	this->data = d;
	this->pret = p;
}
Produs::Produs(const Produs &c)
{
	this->nume = c.nume;
	this->data = c.data;
	this->pret = c.pret;
}
Produs::~Produs()
{
	this->nume ="";
	this->data = "";
	this->pret= NULL;
}

int Produs::getPret()
{
	return this->pret;
}

std::string Produs::getNume()
{
	return this->nume;
}
std::string Produs::getData()
{
	return this->data;
}
void Produs::setPret(int p)
{
	this->pret = p;
}
void Produs::setNume(std::string n)
{
	this->nume = n;
}
void Produs::setData(std::string d)
{
	this->data= d;
}
void teste()
{
	Produs p1 = Produs("lapte", "12.03.19", 5);
	Produs p2 = Produs("paine", "24.07.20", 3);
	assert(p1.getPret() == 5);
	assert(p2.getNume() == "paine");
	p1.setData("12.03.20");
	assert(p1.getData() == "12.03.20");
	p2.setPret(4);
	assert(p2.getPret() == 4);
	std::cout << "Teste din clasa...\n";
}