#include <iostream>
#include <vector>

using namespace std;

int main() {

  // freopen("r_2.in", "r", stdin);
  // freopen("r_2.out", "w", stdout);

  int n, num, temp;
  cin >> n;
  vector <int> a;

  for (int i = 0; i < n; i ++) {
    cin >> num;
    a.push_back(num);
  }

  temp = n;

  for (int i = 0; i < n/2; i ++) {
    swap(a[i], a[temp - 1]);
    temp --;
  }

  for (int i = 0; i < n; i ++)
    cout << a[i] << " ";

  cout << endl;

  return 0;
}
