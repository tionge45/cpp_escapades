#include <iostream>
#include "header.h"


Vector3D sum(Vector3D p1, Vector3D p2) {
    return Vector3D{ p1.x + p2.x, p1.y + p2.y, p1.z + p2.z };
}

Vector3D difference(Vector3D p1, Vector3D p2) {
    return Vector3D{ p2.x - p1.x, p2.y - p1.y, p2.z - p1.z };
}

double scalarProduct(Vector3D p1, Vector3D p2) {
    return double(p1.x * p2.x) + (p1.y * p2.y) + (p1.z * p2.z);
}

double mixedProduct(Vector3D p1, Vector3D p2, Vector3D p3) {
    return (scalarProduct(p1, vectorProduct(p2, p3))); //changed
}

Vector3D vectorProduct(Vector3D p1, Vector3D p2) {
    return Vector3D{ p1.y * p2.z - p1.z * p2.y, p1.z * p2.x - p1.x * p2.z, p1.x * p2.y - p1.y * p2.x, };
}

Vector3D constantMultiply(Vector3D p1, int x) {
    return Vector3D{ p1.x * x, p1.y * x, p1.z * x };
}

Vector3D findVector(Point3D a2, Point3D a1) {
    return Vector3D{ a2.x - a1.x, a2.y - a1.y, a2.z - a1.z };
}

Point3D findPoint(Point3D a1, Vector3D p1) {
    return Point3D{ a1.x - p1.x, a1.y - p1.y, a1.z - p1.z };
}

void Point3D::displayNewCoordinates() {
    std::cout << "New Vector: " << x << " " << y << " " << z;
}

void Vector3D::displayNewCoordinates() {
    std::cout << "New Vector: " << x << " " << y << " " << z;
}


void Point3D::enterOnePoint(){
    std::cout << " Enter coordinates of Point 1(x, y, z): ";
    std::cin >> x >> y >> z;
}

void Vector3D::enter1Vector() {
    std::cout << " Enter coordinates of Vector 1(x, y, z): ";
    std::cin >> x >> y >> z;

}


