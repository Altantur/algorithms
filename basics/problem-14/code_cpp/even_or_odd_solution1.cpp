/**
    @file    even_or_odd_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find A integer is even or odd
    @version 1.0 26/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int a = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> a;
    test_file.close();
    if(a % 2 == 0){
        cout << "Even" << endl;
    } else{
        cout << "Odd" << endl;
    }

    return 0;
}

