/**
    @file    array_el_swap_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Swap even odd indexed value divided by 2, 7
    @version 1.0 05/11/17
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int n, temp;

    // Read from test files
    // test_file.open ("../test/test1.txt");
    // test_file.close();

    // Getting user input
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
      cin >> a[i];
    }

    // Iterating through elements
    for (int i = 0; i < n; i++){
      // Update all the elements with even index
      if (i % 2 == 0) {
        a[i] /= 2;
      } else { // Swap elements on odd indexed because, it is always true it has prev element
        temp = a[i] / 7;
        a[i] = a[i - 1];
        a[i - 1] = temp;
      }
    }

    // Print and Check!
    for (int i = 0; i < n; i++){
      cout << a[i] << endl;
    }

    return 0;
}
