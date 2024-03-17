//#include "Source.cpp"
#include "Header.h"
#include <iostream>

int main() {
	double q, r, s, x, y, z, T;
	std::cout << "Enter initial coordinates (q r s): ";
	std::cin >> q >> r >> s;

	std::cout << "Enter initial velocity(x y z): ";
	std::cin >> x >> y >> z;

	std::cout << "Enter time(T): ";
	std::cin >> T;

	MoleculeMovement simulation(q, r, s, x, y, z);

	simulation.simulate(T);

	simulation.displayNewCoordinates();

	return 0;
}