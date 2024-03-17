#include "Header.h"
#include <iostream>
#include <cmath>

MoleculeMovement ::MoleculeMovement(double q, double r, double s, double x, double y, double z) : q(q), r(r), s(s), x(x), y(y), z(z) {}

void MoleculeMovement::simulate(double T) {
	double dt = 0.01;
	int steps = int(T / dt);

	for (int i = 0; i < steps; ++i) {
		newPosition(dt);
		Collisions();
	}
}

void MoleculeMovement::newPosition(double dt) {
	q += (x * dt);
	r += + (y * dt);
	s += s + (z * dt);
}

void MoleculeMovement::Collisions() {
	double tolerance = 1e-10;

	if (q < -1 + tolerance|| q > 1 - tolerance){
		q = std::max(-1.0, std::min(q, 1.0));
		double product = x * 1.0; // product with normal vector.
		double magnitude = sqrt(x * x+y* y + z* z );
		double reflection_x = x - 2 * product / (magnitude * magnitude) * 1.0;

		x = reflection_x;
	}

	if (r < -1 + tolerance || r > 1 - tolerance) {
		r = std::max(-1.0, std::min(r, 1.0));
		double product = y * 1.0; // product with normal vector.
		double magnitude = sqrt(x * x + y * y + z * z);
		double reflection_y = y - 2 * product / (magnitude * magnitude) * 1.0;

		y = reflection_y;
	}

	if (s < -1 + tolerance || s > 1 - tolerance) {
		s = std::max(-1.0, std::min(s, 1.0));

		double product = z * 1.0; // product with normal vector.
		double magnitude = sqrt(x * x + y * y + z * z);
		double reflection_z = z - 2 * product / (magnitude * magnitude) * 1.0;

		z = reflection_z;
	}
}

void MoleculeMovement::displayNewCoordinates() {
	std::cout << "New Position: (" << q << ", " << r << ", " << s << ")";
}