/**
    @file    is_sorted_array_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find out given array sorted or not
    @version 1.0 06/11/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // ifstream test_file;
    int n, prev, i;
    bool sorted = true;

    // Read from test files
    // test_file.open ("../test/test1.txt");
    // test_file.close();

    // Getting user input
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    prev = a[0];
    for (int i = 1; i < n && sorted; i++){
        if (prev > a[i]) {
            sorted = false;
        }
        prev = a[i];
    }

    if (sorted) 
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

