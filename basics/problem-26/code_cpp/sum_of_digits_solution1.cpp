/**
    @file    sum_of_digits_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find sum of integers digits
    @version 1.0 05/11/17
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
      sum += a % 10;
      a /= 10;
    }

    cout << "Sum is : " << sum << endl;

    return 0;
}
