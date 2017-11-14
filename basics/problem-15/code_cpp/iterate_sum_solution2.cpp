/**
    @file    iterate_sum_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find sum of 2 integers range
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream test_file;
    int n = 0, m = 0, sum;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> m;
    test_file >> n;
    test_file.close();

    // Using Arithmetic sequence to find sum
    sum = m + n;
    sum *= n - m + 1;
    sum /= 2;

    cout << "Sum of " << m << ".." << n << " : " << sum << endl;

    return 0;
}

