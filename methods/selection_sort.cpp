#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int> &a) {
  // Preventing to call size function every iteration
  size_t n = a.size();
  size_t ind;

  for (size_t i = 0; i < n; i++) {
    ind = i;
    for (size_t j = i; j < n; j++) {
      if (a[ind] < a[j]) {
        ind = j;
      }
    }
    swap(a[ind], a[i]);
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
