#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int> &a) {
  // Preventing to call size function every iteration
  size_t n = a.size();

  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n - i - 1; j++) {

      if (a[j] < a[j + 1]) {
        swap(a[j], a[j + 1]);
      }
      
    }
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
