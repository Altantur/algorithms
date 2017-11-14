/**
    @file    median_of_3_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find median number 3 integers
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int a = 0, b = 0, c = 0, median = 0;
    int temp = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> a;
    test_file >> b;
    test_file >> c;
    test_file.close();

    // Find comparing two
    if (a > b){
        if (b > c){
            median = b;
        } else if (c > a){
            median = a;
        } else{
            median = c;
        }
    } else{
        if (b < c){
            median = b;
        } else if (c < a){
            median = a;
        } else{
            median = c;
        }
    }    
    cout << "Median number is : " << median << endl;

    return 0;
}

