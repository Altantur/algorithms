#include <iostream>
#include <vector>

using namespace std;

int* bubble_sort(int* nums, int n) {
  for (int i = 0; i < n; i ++) {
    for (int j = i + 1; j < n; j ++) {
        if (nums[i] > nums[j])
          swap(nums[i], nums[j]);
    }
  }
  return nums;
}

int* selection_sort(int* nums, int n) {
  int mini;
  for (int i = 0; i < n; i ++) {
    mini = i;
    for (int j = i + 1; j < n; j ++) {
      if (nums[mini] > nums[j])
        mini = j;
    }

    if (mini != i)
      swap(nums[mini], nums[i]);

  }
  return nums;
}

int* insertion_sort(int* nums, int n) {
  return nums;
}

int* merge_sort(int* nums, int n) {
  return nums;
}

int* counting_sort(int* nums, int n) {
  if (n == 0) return nums;
  int min = nums[0], max = nums[0];
  int count = 0;

  for (int i = 0; i < n; i ++) {
    if (min > nums[i])
      min = nums[i];
    if (max < nums[i])
      max = nums[i];
  }

  int size = max - min + 1;
  int a[size];
  count = size;

  for (int i = 0; i < size; i ++)
    a[i] = 0;

  for (int i = 0; i < n; i ++)
    a[nums[i] - min] ++;

  for (int i = size - 1; i >= 0; i --) {
    while (a[i]) {
      count --;
      nums[count] = i + min;
      a[i] --;
    }
  }

  return nums;
}

int* quick_sort(int* nums, int n) {
  return nums;
}

int main () {
  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i ++)
    cin >> a[i];

  // bubble_sort(a, n);
  // selection_sort(a, n);
  counting_sort(a, n);

  for (int i = 0; i < n; i ++)
    cout << a[i] << " ";

  cout << endl;

}
