#pragma once

class Vector3D {
public:
    double x, y, z;
    void displayNewCoordinates();
    void enter1Vector();
    
};

class Point3D {
public:
    double x, y, z;
    void displayNewCoordinates();
    void enterOnePoint();
    
};

Vector3D sum(Vector3D p1, Vector3D p2);
Vector3D difference(Vector3D p1, Vector3D p2);
Vector3D constantMultiply(Vector3D p1, int x);
Vector3D findVector(Point3D a2, Point3D a1);
Vector3D vectorProduct(Vector3D p1, Vector3D p2);
Point3D findPoint(Point3D a1, Vector3D p1);
double scalarProduct(Vector3D p1, Vector3D p2);
double mixedProduct(Vector3D p1, Vector3D p2, Vector3D p3);

//void displayNewCoordinates();




