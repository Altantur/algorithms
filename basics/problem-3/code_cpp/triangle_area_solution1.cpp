/**
    @file    triangle_area_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find area of triangle by sides
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    ifstream test_file;
    float a = 0, b = 0, c = 0, p = 0, area = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> a;
    test_file >> b;
    test_file >> c;
    test_file.close();

    // p is indicating half of perimeter
    p = (a + b + c) / 2;

    // Heron's formula to calculate area of triangle
    area = (p - a) * (p - b) * (p - c) * p;
    area = sqrt(area);

    cout << "Area of triangle : " << area << endl;

    return 0;
}

