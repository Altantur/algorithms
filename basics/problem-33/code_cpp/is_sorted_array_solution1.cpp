/**
    @file    is_sorted_array_solution1.cpp
    @author  Altantur Bayarsaikhan (altantur)
    @purpose Find out given array sorted or not
    @version 1.0 06/11/17 
*/
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

bool is_sorted(vector<int>& a) {
    for (size_t i = 1; i < a.size(); i++)
        if ( a[i - 1] > a[i] )
            return false;
    return true;
}

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];


    cout << (is_sorted(a) ? "Yes" : "No") << endl;
    return 0;
}

