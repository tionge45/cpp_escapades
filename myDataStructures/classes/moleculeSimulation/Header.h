#pragma once

class MoleculeMovement {
public:
	MoleculeMovement(double q, double r, double s, double x, double y, double z);
	void simulate(double T);
	void displayNewCoordinates();
private:
	double q, r, s;
	double x, y, z;

	void newPosition(double dt);
	void Collisions();

};

