#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main () {
  ifstream infile("input.txt");
  ofstream outfile("output.txt");

  double t, x, y, temp;
  infile >> t;

  while (t --) {
    infile >> x >> y;
    outfile << setprecision(4) << fixed << x / y << endl;
  }

  return 0;

}
