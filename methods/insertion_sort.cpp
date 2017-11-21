#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int> &a) {
  // Preventing to call size function every iteration
  size_t n = a.size();
  int x;

  for (size_t i = 1; i < n; i++) {
    x = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > x) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = x;
  }

}

int main(){

  // Getting user input and declaring vars
  size_t n;
  cin >> n;
  vector<int> a(n);

  for (size_t i = 0; i < n; i++)
    cin >> a[i];

  sort(a);

  for (size_t i = 0; i < n; i++)
    cout << a[i] << " ";

  return 0;
}
