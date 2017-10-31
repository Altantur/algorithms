/**
    @file    input_print_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find sum of 2 integers
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int n = 0, ai = 0, bi = 0;

    // Read from test files
    // test_file.open ("../test/test1.txt");
    // test_file >> n;
    // int a[n];
    // for(int i = 0; i < n; i++){
    //     test_file >> a[i];
    // }
    // test_file.close();

    // Read from input
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i ++){
        cout << a[i];
    }
    cout << endl;
    return 0;
}

