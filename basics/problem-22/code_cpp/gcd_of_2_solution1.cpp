/**
    @file    gcd_of_2_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find greatest common divider of 2 integers
    @version 1.0 26/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int gcd = 0, a = 0, b = 0, ai = 0, bi = 0;
    int arr[1000] = {0}, brr[1000] = {0};

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> a;
    test_file >> b;
    test_file.close();

    // Using loops through every integers till the target numbers
    for(int i = 1; i < a && i < b; i ++){
       if(a % i == 0 && b % i == 0){
        arr[ai] = i; 
        ai ++;
       }
    }

    cout << arr[ai -1] << endl;

    return 0;
}
