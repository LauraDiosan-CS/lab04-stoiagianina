#include "Repository.h"
#include <assert.h>

Repository::Repository()
{
}
std::vector<Produs> Repository::getAllRepo()
{
	return this->All;
}
void Repository::addElem(Produs produs)
{
	All.push_back(produs);
}
int Repository::repoSize()
{
	return this->All.size();
}
void teste1()
{
	Produs p1 = Produs("lapte", "12.03.19", 5);
	Produs p2 = Produs("paine", "24.07.20", 3);
	Repository repo;
	repo.addElem(p1);
	assert(repo.repoSize() == 1);
	std::cout << "Teste din repo...\n";
}
	