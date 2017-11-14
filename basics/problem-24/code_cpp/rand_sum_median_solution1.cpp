/**
    @file    rand_sum_median_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find sum and median number of 10 rand elements  
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
#include <ctime> // Needed for the true randomization
#include <cstdlib>
using namespace std;

//Insertion sort array
void sort(int a[10]){
    int temp;
    for(int i = 0; i < 10; i++){
        for(int j = i; j > 0 && a[j - 1] > a[j]; j--){
            temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
        }
    }
}

int main(){
    ifstream test_file;
    int a[10], sum = 0, median = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    cout << "Random numbers of ";

    // Iterating 10 times to generate random number and calc sum
    for (int i = 0; i < 10; i++){
        // a[i] = rand() % 1000;
        test_file >> a[i];
        sum += a[i];
        cout << a[i] << " ";
    }
    test_file.close();
    
    sort(a);
    cout << endl << "Sorted numbers of ";
    for(int i = 0; i < 10; i++){
        cout << a[i] << " ";
    }
    cout << endl << "Sum : " << sum << endl;
    cout << "The median numbers are : " << a[4] << ", " << a[5] << endl;

    return 0;
}

