#include <iostream>

using namespace std;

struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};

int main(int argc, char const *argv[]) {
  ListNode list(2);
  cout << list.val << endl;
  return 0;
}
