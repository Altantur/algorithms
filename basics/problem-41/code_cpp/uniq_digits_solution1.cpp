/**
    @file    uniq_digits_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find sum of 2 integers
    @version 1.0 10/11/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Read from test files
    // ifstream test_file;
    // test_file.open ("../test/test1.txt");
    // test_file.close();
    int tp, tp1, tp2;
    for (int i = 100; i < 1000; i ++){
        tp = i % 10;
        tp1 = (i - tp) % 100;
        tp1 /= 10;
        tp2 = i / 100;
        if (tp != tp1 &&
            tp1 != tp2 && 
            tp2 != tp){
                cout << i << ", ";
            }
    }

    return 0;
}

