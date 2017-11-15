/**
    @file    duplicate_entry_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find sum of 2 integers
    @version 1.0 25/10/17
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Read from test files
    // ifstream test_file;
    // test_file.open ("../test/test1.txt");
    // test_file.close();
    int count = 0, prev, current;

    cin >> current;
    count ++;
    do{
        prev = current;
        cin >> current;
        count ++;
    } while(prev != current);

    cout << "Count is : " << count << endl;

    return 0;
}
