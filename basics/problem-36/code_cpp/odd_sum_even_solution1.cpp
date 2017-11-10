/**
    @file    odd_sum_even_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find sum of 2 integers
    @version 1.0 08/11/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Read from test files
    // ifstream test_file;
    // test_file.open ("../test/test1.txt");
    // test_file.close();

    // Getting user input, variable init 
    int n, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++)
        cin >> a[i];

    // Iterating through to add into sum
    for (int i = 0; i < n; i ++){
        if(a[i] % 2 != 0 && i % 2 == 0)
            sum += a[i];
    }

    cout << "Sum of index : " << sum << endl;

    return 0;
}

