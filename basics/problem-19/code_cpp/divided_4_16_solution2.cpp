/**
    @file    divided_4_16_solution2.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Count range of integers can be divided by 4 and cannot be by 16
    @version 1.0 27/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int m = 0, n = 0, count = 0;
    int c4 = 0, c16 = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> m;
    test_file >> n;
    test_file.close();

    // Linear calculation
    count = n - m;
    c4 = n / 4 - (m - 1) / 4;
    c16 = n / 16 - (m - 1) / 16;

    cout << "Integers " << m << " to " << n << " : " << c4 - c16 << endl;

    return 0;
}

