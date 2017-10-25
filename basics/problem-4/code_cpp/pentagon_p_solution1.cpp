/**
    @file    pentagon_p_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find sum of 2 integers
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int a = 0, b = 0, c = 0, d = 0, f = 0, perimeter = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> a;
    test_file >> b;
    test_file >> c;
    test_file >> d;
    test_file >> f;
    test_file.close();

    // Calc of perimeter pentagon
    perimeter  = a + b + c + d + f;
    cout << "Perimeter of pentagon : " << perimeter << endl;

    return 0;
}

