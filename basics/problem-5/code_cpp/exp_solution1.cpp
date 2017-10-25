/**
    @file    exp_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Calc of expression
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int x = 0, ans = 0; 

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> x;
    test_file.close();

    // Calc of experession x**2 + 2*x + 2340 = ?
    ans = x * x;
    ans += x * 2;
    ans += 2340;

    cout << "Answer of expression : " << ans << endl;

    return 0;
}

