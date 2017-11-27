#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &a, int x) {
  // Preventing to call size function every iteration
  int m; // Index of middle element
  size_t n = a.size(); // Length of vector
  int l = 0, r = n - 1;

  while (l <= r) {
    m = l + (r - l) / 2;
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
  cin >> x; // This will be our find value
  size_t n;
  cin >> n; // Given sorted array size
  vector<int> a(n);

  for (size_t i = 0; i < n; i++)
    cin >> a[i];

  cout << "Index is : " << search(a, x) << endl;

  return 0;
}
