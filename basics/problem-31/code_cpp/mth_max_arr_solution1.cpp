/**
    @file    mth_max_arr_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find M-th max of given array, return index
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n, m, temp;

    ifstream test_file;
    // Read from test files
    // test_file.open ("../test/test1.txt");
    // test_file >> m;
    // test_file >> n;
    // int a[n], b[n];
    // for(int i = 0; i < n; i++){
    //     test_file >> a[i];
    //     b[i] = a[i];
    // }
    // test_file.close();


    // Getting user input from stdin
    cin >> m;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    // Using bubble sort till needed part
    for(int i = 0; i < m; i++){
       for(int j = 0; j < n - i - 1; j++){
           if(a[j] > a[j + 1]){
               temp = a[j + 1];
               a[j + 1] = a[j];
               a[j] = temp;
           }
       } 
    }
    
    // Getting the index from backed array
    for(int i = 0; i < n; i++){
       if(b[i] == a[n - m]){
        cout << "M-th max elements index is : " << i << endl; 
       }
    }

    return 0;
}

