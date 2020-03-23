#include <iostream>
#include <assert.h>

#include "Source.h"

using namespace std;

Produs::Produs()
{

}

std::vector <Produs> Controller::getAll()
{
	std::vector <Produs>vector = this->repo.getAllRepo();
	return vector;
}

void Controller::addCtr(Produs p)
{
	this->repo.addElem(p);
}
void Controller::afisare_produs(int p)
{

}
void Controller::update_reducere(std::string d)
{

}

void test_c()
{
	Produs p1 = Produs();
	assert(p1.getNume() == "");
	assert(p1.getPret() == 0);
	assert(p1.getData() == " ");

	Produs p2 = Produs("lapte", "12.03.19", 5);
	assert(p2.getNume() == "lapte");
	assert(p2.getPret() == 5);
	std:string p = p2.getNume();
	assert(p[0] == 'l');
	assert(p[1] == 'a');
	assert(p[2] == 'p');

	cout << "Testele pentru clasa cheltuiala functioneaza." << endl;
}
