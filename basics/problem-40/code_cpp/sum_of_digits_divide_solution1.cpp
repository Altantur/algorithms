/**
    @file    sum_of_digits_divide_solution1.cpp
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
    int n, k, count = 0, sum, temp;

    cin >> n;
    cin >> k;

    for (int i = 1; i <= n; i++){
        sum = 0;
        temp = i;
        while (temp > 0){
            sum *= 10;
            sum += temp % 10;
            temp /= 10;
        }
        if (sum % k == 0) 
            count ++;
    }

    cout << "Count : " << count << endl;
    
    return 0;
}

