/**
    @file    sum_inc_3_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find sum of 2 integers
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int m = 0, n = 0, sum = 0, count;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> m;
    test_file >> n;
    test_file.close();
    while(m % 3 != 0){
        m ++;
    }
    while(m % 3 != 0){
        n --;
    }

    // Arithmetic sequence
    count = n - m + 3;
    count /= 3;

    sum = n + m;
    sum *= count;
    sum /= 2;

    cout << "Sum of numbers that can divided by 3 : " << sum << endl;

    return 0;
}

