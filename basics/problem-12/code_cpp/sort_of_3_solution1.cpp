/**
    @file    sort_of_3_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Sort 3 integers
    @version 1.0 26/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int a = 0, b = 0, c = 0;
    int temp = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> a;
    test_file >> b;
    test_file >> c;
    test_file.close();

    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    if(b > c){
        temp = b;
        b = c;
        c = temp;
    }
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }

    cout << "Sorted in following order : " << a << " " << b << " " << c;


    return 0;
}

