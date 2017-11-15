/**
    @file    uniq_digits_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find sum of 2 integers
    @version 1.1 15/11/17
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Read from test files
    // ifstream test_file;
    // test_file.open ("../test/test1.txt");
    // test_file.close();
    int digits[3];
    for (digits[0] = 1; digits[0] < 10; digits[0]++) {
      for (digits[1] = 0; digits[1] < 10; digits[1]++) {
        for (digits[2] = 0; digits[2] < 10; digits[2]++) {
          if(digits[0] != digits[1] &&
             digits[1] != digits[2] &&
             digits[2] != digits[0]){
               cout << digits[0] << digits[1] << digits[2] << " ";
           }
        }
      }
    }


    return 0;
}
