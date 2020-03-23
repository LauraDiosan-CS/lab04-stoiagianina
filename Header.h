
#include <string.h>
//#include <iostream>

#include "Repository.h"

class Controller
{
private:
	Repository repo;
public:
	Controller();


	std::vector<Produs> getAll();
	void addCtr(Produs p);
	void afisare_produs(int p);
	void update_reducere(std::string d);
	
};
void test_c();

