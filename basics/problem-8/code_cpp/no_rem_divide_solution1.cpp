/**
    @file    no_rem_divide_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find out if 2 integers can divided
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int a = 0, b = 0;
    bool is_no_rem = false;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> a;
    test_file >> b;
    test_file.close();

    // Checking if `a` can be divided by `b`
    is_no_rem = a % b == 0;
    
    cout << "Is A can be divided by B : " << is_no_rem << endl;

    return 0;
}

