// 2026-04-08

#include <iostream>
#include <string>

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	int universityRegionContest, teamsRegionContest, universityTOPC, teamsTOPC;

	std::cin >> universityRegionContest >> teamsRegionContest >> universityTOPC >> teamsTOPC;

	std::cout << 56 * universityRegionContest + 24 * teamsRegionContest + 14 * universityTOPC + 6 * teamsTOPC;
	
	

	return 0;
}