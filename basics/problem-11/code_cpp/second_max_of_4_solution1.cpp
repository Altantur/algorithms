/**
    @file    second_max_of_4_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find second max of 4 integers
    @version 1.0 26/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int a = 0, b = 0, c = 0, d = 0, smax = 0;
    int temp;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> a;
    test_file >> b;
    test_file >> c;
    test_file >> d;
    test_file.close();

    // Calc
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
    if(c > d){
        temp = c;
        c = d;
        d = temp;
    }
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
    
    cout << "Second max number is : " << c << endl; 
    return 0;
}

