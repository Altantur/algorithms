/**
    @file    max_diff_of_array_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find 2 integers that have biggest difference
    @version 1.0 08/11/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // ifstream test_file;

    // Read from test files
    // test_file.open ("../test/test1.txt");
    // test_file.close();

    // Getting user input
    int n, maxi = -1, mini = -1;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i ++)
        cin >> a[i];
    
    // Iniatate with first value
    if (n > 0){
        maxi = 0;
        mini = 0;
    }
    
    // To find max and min value
    for (int i = 0; i < n; i ++){
        if (a[maxi] < a[i]) 
            maxi = i;
        else if (a[mini] > a[i])
            mini = i;
    }

    cout << "Max(value, index) : " << a[maxi] << ", " << maxi << endl;
    cout << "Min(value, index) : " << a[mini] << ", " << mini << endl;

    return 0;
}

