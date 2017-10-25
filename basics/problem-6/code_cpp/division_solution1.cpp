/**
    @file    division_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find division of 2 integers
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int divd = 0, divr = 0, quo = 0, rem = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> divd;
    test_file >> divr;
    test_file.close();

    // Calculation of division
    quo = divd / divr;
    // Calculation of module division
    rem = divd % divr;

    cout << "Quotient : " << quo << endl;
    cout << "Remainder : " << rem << endl;

    return 0;
}

