/**
    @file    power_of_2_solution2.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find out given integer is power of 2
    @version 1.0 21/11/17
*/
#include <iostream>
#include <fstream>
using namespace std;

bool is_pow_two(int a){
  // If given a is power of 2 should (a & (a - 1)) = 0 
  // If given a is zero we will return false
  return (a && !(a & (a - 1)));
}

int main(){

    // Getting user input
    int a;
    cin >> a;

    is_pow_two(a) ? cout << "Yes" : cout << "No";
    cout << endl;

    return 0;
}
