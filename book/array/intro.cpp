#include <iosream>

using namespace std;

int main () {
  int n, k;
  cin >> n >> k;

  int a[n];

  for (int i = 0; i < n; i ++)
    cin >> a[i];

  cout << a[k - 1] << endl;

  return 0;

}
