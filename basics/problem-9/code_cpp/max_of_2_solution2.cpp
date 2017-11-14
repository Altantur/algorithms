/**
    @file    max_of_2_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find max of 2 integers
    @version 1.0 26/10/17 
*/
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    ifstream test_file;
    int a = 0, b = 0, max = 0;
    int temp = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> a;
    test_file >> b;
    test_file.close();

    // Finding max integer without using comparation operator
    max = a + b;
    // We can also use cmath lib - abs(a - b)
    temp = (a - b);
    temp *= temp;
    temp = sqrt(temp);
    max += temp;
    max /= 2;
    

    cout << "Max number is : " << max << endl;

    return 0;
}

