/**
    @file    rectangle_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find area and perimeter of rectangle
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int area = 0, perimeter = 0, w = 0, l = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> l;
    test_file >> w;
    test_file.close();

    // Calc of rectangle area 
    area = w * l;

    // Calc of rectangle perimeter
    perimeter = (w + l) * 2;

    cout << "Area : " << area << endl;
    cout << "Perimeter : " << perimeter << endl;

    return 0;
}

