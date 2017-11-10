/**
    @file    power_of_2_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find out given integer is power of 2
    @version 1.0 08/11/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Read from test files
    // ifstream test_file;
    // test_file.open ("../test/test1.txt");
    // test_file.close();

    // Getting user input
    int a;
    cin >> a;

    bool is_pow_two = true;

    while(a > 1){
        is_pow_two = a % 2 == 0;
        if (is_pow_two) 
            a /= 2;
        else 
            break;
    }

    is_pow_two ? cout << "Yes" : cout << "No";
    cout << endl;

    return 0;
}

