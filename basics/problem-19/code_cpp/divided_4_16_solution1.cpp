/**
    @file    divided_4_16_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Count range of integers can be divided by 4 and cannot be by 16
    @version 1.0 27/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int m = 0, n = 0, count = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> m;
    test_file >> n;
    test_file.close();

    // Iterating and counting
    for(int i = m; i <= n; i ++){
        if (i % 4 == 0 && i % 16 != 0)
        count ++;
    }

    cout << "Integers " << m << " to " << n << " : " << count << endl;

    return 0;
}

