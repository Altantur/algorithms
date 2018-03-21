#include <iostream>
#include <vector>
#include <string>

using namespace std;

string capitalize(string s) {
  int len = s.size();
  if (len == 0) return s;

  if (s[0] >= 'a' && s[0] <= 'z')
    s[0] -= 32;

  for (int i = 1; i < len; i ++) {
    if (s[i] >= 'A' && s[i] <= 'Z')
      s[0] += 32;
  }

  return s;

}

int main () {

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  int n, count;
  cin >> n;

  bool flag = false;

  vector < pair <string, string> > a(n);
  string fname, lname;

  for (int i = 0; i < n; i ++) {
    cin >> fname >> lname;
    a[i].first = capitalize(fname);
    a[i].second = capitalize(lname);
  }

  count = n;

  do {
    flag = false;
    for (int i = 1; i < count; i ++) {
      if (a[i - 1].second.compare(a[i].second) > 0) {
        swap(a[i - 1], a[i]);
        flag = true;
      }
      if (a[i - 1].second.compare(a[i].second) == 0) {
        if (a[i - 1].first.compare(a[i].first) > 0) {
          swap(a[i - 1], a[i]);
          flag = true;
        }
      }
    }
    count --;

  } while(flag);

  for (int i = 0; i < n; i ++)
    cout << a[i].first << " " << a[i].second << endl;

  return 0;

}
