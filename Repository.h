#include <vector>
#include "Cheltuieli.h"

class Repository
{
private:
	std::vector<Produs> All ;
public:
	Repository();
	std::vector<Produs>getAllRepo();
	void addElem(Produs produs);
	int repoSize();
};

void teste1();