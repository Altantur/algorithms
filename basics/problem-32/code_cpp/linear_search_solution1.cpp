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
    int n, k, ind = 0;

    // Read from test files
    // test_file.open ("../test/test1.txt");
    // test_file.close();

    // Getting user input
    cin >> k;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // Break from first occurance
    for(int i = 0; i < n; i++){
        if(a[i] == k){
            ind = i;
            break;
        }
    }

    // Assure if it is real one or invalid value
    if(n > 0){
       if(a[ind] == k){
          cout << "Index is : " << ind << endl; 
       } else{
          cout << "No" << endl;
       }
    } else {
        cout << "No" << endl;
    }

    return 0;
}

