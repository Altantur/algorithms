/**
    @file    check_prime_num_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Check if A integer is prime number
    @version 1.0 27/10/17 
*/
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    ifstream test_file;
    int a = 0;
    int ind = 0, st = 0;
    bool is_prime = true;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> a;
    test_file.close();

    // Loop through all integers till given square root A
    st = sqrt(a);
    for(int i = 2; i <= st && ind < 1; i++){
        if(a % i == 0) 
        ind ++;
    }
    is_prime = ind == 0 && a > 1;

    cout << "Given " << a << " is prime number : " << is_prime << endl;

    return 0;
}

