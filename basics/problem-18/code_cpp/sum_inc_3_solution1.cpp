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
    int m = 0, n = 0, sum = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> m;
    test_file >> n;
    test_file.close();

    // Incrementing by 3 to limit and adding to sum.
    for(int i = m; i <= n; i += 3){
        sum += i;
    }

    cout << "Sum of numbers that can divided by 3 : " << sum << endl;

    return 0;
}

