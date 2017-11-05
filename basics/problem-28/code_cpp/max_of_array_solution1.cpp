/**
    @file    max_of_array_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find max of given array
    @version 1.0 25/10/17
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int n, max;

    // Read from test files
    // test_file.open ("../test/test1.txt");
    // test_file.close();

    // Getting user input
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++){
      cin >> a[i];
    }

    if (n > 0){ // to try not to access invalid value
      max = a[0];
      // Iterating through the array updating maximum value
      for (int i = 0; i < n; i ++){
        if (max < a[i]){
          max = a[i];
        }
      }
    }

    cout << "Maximum integer : " << max << endl;

    return 0;
}
