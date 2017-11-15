/**
    @file    change_sorted_array_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find out if only value changed then array can be sorted
    @version 1.0 25/10/17
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
    int n, changes = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i ++)
        cin >> a[i];

    // To try to find at least one change
    for (int i = 1; i < n; i ++){
        if (i - 1 == 0 && a[i-1] > a[i]){
            a[i-1] = a[i];
            changes ++;
        }
        if (i + 1 == n - 1 && a[i+1] < a[i]){
            a[i+1] = a[i];
            changes ++;
        }
        if (a[i-1] > a[i]){
            a[i] = a[i-1] + a[i+1];
            a[i] /= 2;
            changes ++;
        }
    }

    // After above only made mandotary change
    // Then check lefted change
    for (int i = 1; i < n; i ++){
        if(a[i-1] > a[i])
            changes ++;
    }

    changes > 1 ? cout << "No" << endl : cout << "Yes" << endl;

    return 0;
}
