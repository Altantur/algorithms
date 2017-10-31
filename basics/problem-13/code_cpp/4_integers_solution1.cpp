/**
    @file    4_integers_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find sum of 2 integers
    @version 1.0 25/10/17 
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int a = 0, b = 0, c = 0, d = 0;
    int sum = 0, count = 0, product = 0;

    // Read from test files
    test_file.open ("../test/test1.txt");
    test_file >> a;
    test_file >> b;
    test_file >> c;
    test_file >> d;
    test_file.close();

    if(a > 0){
        sum += a;
    } else if(a == 0){
        count ++;
    } else if(product == 0){
        product = a;
    } else product += a;

    if(b > 0){
        sum += b;
    } else if(b == 0){
        count ++;
    } else if(product == 0){
        product = b;
    } else product += b;

    if(c > 0){
        sum += c;
    } else if(c == 0){
        count ++;
    } else if(product == 0){
        product = c;
    } else product += c;

    if(d > 0){
        sum += d;
    } else if(d == 0){
        count ++;
    } else if(product == 0){
        product = d;
    } else product *= d;

    cout << "Sum of numbers that more than 0 : " << sum << endl;
    cout << "Count of numbers that equal to 0 : " << count << endl;
    cout << "Product of numbers that less than 0 : " << product << endl;

    return 0;
}

