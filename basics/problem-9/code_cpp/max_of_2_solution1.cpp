/**
    @file    max_of_2_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find max of 2 integers
    @version 1.0 26/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int a = 0, b = 0, max = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> a;
    test_file >> b;
    test_file.close();

    // Comparing two integers
    max = a > b ? a : b;

    cout << "Max number is : " << max << endl;

    return 0;
}

