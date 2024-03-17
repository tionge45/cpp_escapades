#include <iostream>
#include "header.h"



int main() {
    Vector3D p1, p2, p3, resultVector;
    Point3D a1, a2, resultPoint;

    int choice;
    std::cout << "Choose Operation (1: sum; 2: difference; 3: product; 4: mixedProduct 5: constantMultiply; 6: vectorProduct; 7: findVector; 8: findPoint)\n";
    std::cin >> choice;


    if (choice == 1) {
        p1.enter1Vector();
        p2.enter1Vector();
        resultVector = sum(p1, p2);
        resultVector.displayNewCoordinates();
    }
    else if (choice == 2) {
        p1.enter1Vector();
        p2.enter1Vector();
        resultVector = difference(p1, p2);
        resultVector.displayNewCoordinates();
    }
    else if (choice == 3) {
        p1.enter1Vector();
        p2.enter1Vector();
        std::cout << "Scalar Product: " << scalarProduct(p1, p2);
    }
    else if (choice == 4) {
        p1.enter1Vector();
        p2.enter1Vector();
        p3.enter1Vector();
        std::cout << "Mixed Product: " << mixedProduct(p1, p2, p3);
    }
    else if (choice == 5) {
        p1.enter1Vector();
        int x;
        std::cout << "Enter constant: ";
        std::cin >> x;
        resultVector = constantMultiply(p1, x);
        resultPoint.displayNewCoordinates();
    }

    else if (choice == 6) {
        p1.enter1Vector();
        p2.enter1Vector();
        resultVector = vectorProduct(p1, p2);
        resultVector.displayNewCoordinates();
    }
    else if (choice == 7) {
        a1.enterOnePoint();
        a2.enterOnePoint();
        resultVector = findVector(a2, a1);
        resultVector.displayNewCoordinates();
    }
    else if (choice == 8) {
        a1.enterOnePoint();
        p1.enter1Vector();
        resultPoint = findPoint(a1, p1);
        resultVector.displayNewCoordinates();
    }

    return 0;
}
