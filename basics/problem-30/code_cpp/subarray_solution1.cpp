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

    int count = 0, prev;
    prev = a[0] ^ 1;
    for (int i = 0; i < n; i++) {
      // Counting and resetting counter; At least one should be counted
      if (a[i] == prev){
        count ++;
      } else{
        count = 1;
      }

      // Setting longest one
      if (lcom < count){
        lcom = count;
      }
      prev = a[i];
    }

    cout << "Longest streak is : " << lcom << endl;

    return 0;
}
