/**
    @file    solution_1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Sum of 2 numbers
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int a = 0, b = 0, sum = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> a;
    test_file >> b;
    test_file.close();

    // Find sum of a and b
    sum = a + b;

    cout << sum << endl;

    return 0;
}

