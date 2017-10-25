#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream test_file;
    int a = 0, b = 0, sum = 0;

    test_file.open ("../test/test1.txt");
    test_file >> a;
    test_file >> b;
    test_file.close();

    sum = a + b;

    cout << sum << endl;

    return 0;
}

