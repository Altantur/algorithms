/**
    @file    linear_search_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find given value from array, if nothing found print "No"
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // ifstream test_file;
    int n, k, i;

    // Read from test files
    // test_file.open ("../test/test1.txt");
    // test_file.close();

    // Getting user input
    cin >> k;
    cin >> n;
    int a[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    // Break from first occurance
    for(i = 0; i < n; i++){
        if(a[i] == k) break; 
    }

    // Assure if it is real one or invalid value
    if(n > 0){
       if(a[i] == k){
          cout << "Index is : " << i << endl; 
       } 
       else{
          cout << "No" << endl;
       }
    }

    return 0;
}

