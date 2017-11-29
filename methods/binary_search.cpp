#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &a, int x) {

  size_t n = a.size();
  int l = 0;
  int r = n - 1;

  while (l <= r) {

    int m = l + (r - l) / 2;

    if (a[m] == x) {
      return m;
    }
    if (a[m] < x) {
      l = m + 1;
    } else {
      r = m - 1;
    }

  }
  return -1;
}

int main(){

  // Getting user input and declaring vars
  int x;
  cin >> x;
  size_t n;
  cin >> n;
  vector<int> a(n);

  for (size_t i = 0; i < n; i++)
    cin >> a[i];

  cout << "Index is : " << search(a, x) << endl;

  return 0;
}
