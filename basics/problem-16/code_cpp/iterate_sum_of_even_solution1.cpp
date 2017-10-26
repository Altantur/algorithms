/**
    @file    iterate_sum_of_even_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find sum of in range (N..M)
    @version 1.0 26/10/17 
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

    for(int i = m; i <= n; i += 2){
        sum += i;
    }

    cout << sum << endl;

    return 0;
}

