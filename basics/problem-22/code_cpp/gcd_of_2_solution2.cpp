/**
    @file    gcd_of_2_solution2.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find greatest common divider of 2 integers
    @version 1.0 26/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int gcd = 1, a = 0, b = 0;
    int mod = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> a;
    test_file >> b;
    test_file.close();

    // Using Euclidean method
    do {
        mod = a % b;
        gcd = mod;
        mod = b % mod;
    } while(mod != 0);
    

    cout << "Greatest common divider is : " << gcd << endl;

    return 0;
}
