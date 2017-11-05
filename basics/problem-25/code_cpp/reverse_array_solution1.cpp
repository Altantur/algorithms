/**
    @file    reverse_array_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Given array reverse and print
    @version 1.0 25/10/17
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // ifstream test_file;
    int n, i = 0, h = 0, temp;

    // Read from test files
    // test_file.open ("../test/test1.txt");
    // test_file.close();

    // Get array from input
    cin >> n;
    int a[n];
    for(i = 0; i < n; i++){
      cin >> a[i];
    }

    // Only iterating through half of size
    h = n / 2;
    for(i = 0; i < h; i++){
      // To find corresponding element from later half, since index starts from 0 we need to sub 1
      int tur = n - i - 1;
      temp = a[i];
      a[i] = a[tur];
      a[tur] = temp;
    }

    // Print and check!
    for(i = 0; i < n; i++){
      cout << a[i] << endl;
    }

    return 0;
}
