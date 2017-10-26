/**
    @file    diagonal_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find diagonal of rectangle
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    ifstream test_file;
    int w = 0, l = 0, diag = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> l;
    test_file >> w;
    test_file.close();

    // Calc of diagonal 
    diag = l * l;
    diag += w * w;
    diag = sqrt(diag);

    cout << "Diagonal of rectangle : " << diag << endl;

    return 0;
}

