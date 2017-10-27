/**
    @file    leap_year_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find given year is leap or not.
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int year = 0;
    bool is_leap = false;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> year;
    test_file.close();

    // Calc by 3 conditions
    if(year % 4 == 0){
        if(year % 100 != 0){
            is_leap = true;
        } else if (year % 400 == 0){
            is_leap = true;
        }
    }

    cout << "Is " << year << " a leap year : " << is_leap << endl;

    return 0;
}

