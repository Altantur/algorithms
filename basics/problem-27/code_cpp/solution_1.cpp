/**
    @file    reverse_digits_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Reverse the digits of given integer
    @version 1.0 25/10/17
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int a, sum = 0;

    // Read from test files
    // test_file.open ("../test/test1.txt");
    // test_file.close();

    // Get user input
    cin >> a;
    while(a > 0){
      sum *= 10;
      sum += a % 10;
      a /= 10;
    }

    cout << "Reversed : " << sum << endl;

    return 0;
}
