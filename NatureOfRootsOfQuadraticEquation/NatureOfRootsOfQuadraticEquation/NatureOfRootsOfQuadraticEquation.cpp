// NatureOfRootsOfQuadraticEquation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    std::cout << (10 & 6);

    float a, b, c, d, r1, r2;

    std::cout << "Please proivde a, b, c: \n";
    std::cin  >> a >> b >> c;

    d = (b * b) - 4 * a * c;

    r1 = (-b + sqrt(d)) / (2 * a);

    r2 = (-b - sqrt(d)) / (2 * a);
    
    if (d == 0)
        std::cout << "real and equal " << r1;
    else if (d > 0)
        std::cout << "real and unequal " << r1 << " " << r2 ;
    else
        std::cout << "imaginary";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
