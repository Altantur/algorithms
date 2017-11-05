/**
    @file    subarray_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find sum of 2 integers
    @version 1.0 05/11/17
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int n, lcom = 0;

    // Read from test files
    // test_file.open ("../test/test1.txt");
    // test_file.close();

    // Getting user input
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    if (n > 0) {
      int prev = a[0], count = 1, price = a[0];
      for (int i = 1; i < n; i++) {
        // Counting and resetting counter; At least one should be counted
        if (prev == a[i]){
          count ++;
        }
        else {
          count = 1;
        }

        // Setting longest one
        if (lcom < count){
          lcom = count;
        }

        // For comparetion of next iteration
        prev = a[i];
      }
    }


    cout << "Longest streak is : " << lcom << endl;

    return 0;
}
