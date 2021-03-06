/**
    @file    square_root_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find square root of given non-negative integer X
    @version 1.0 15/11/17
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){

    // Getting user input and init vars
    int a, i = 0;
    cin >> a;

    while(i * i <= a){
      i++;
    }
    i--;

    cout << i << endl;

    return 0;
}
