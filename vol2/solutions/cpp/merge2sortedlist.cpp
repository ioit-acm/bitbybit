#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int> &nums1, vector<int> &nums2) {
  vector<int> merged;
  int i = 0, j = 0;

  while (i < nums1.size() && j < nums2.size()) {
    if (nums1[i] < nums2[j]) {
      merged.push_back(nums1[i++]);
    } else {
      merged.push_back(nums2[j++]);
    }
  }

  while (i < nums1.size()) {
    merged.push_back(nums1[i++]);
  }
  while (j < nums2.size()) {
    merged.push_back(nums2[j++]);
  }

  return merged;
}

int main() {
  int n, m;
  cin >> n;
  vector<int> nums1(n);
  for (int i = 0; i < n; i++) {
    cin >> nums1[i];
  }

  cin >> m;
  vector<int> nums2(m);
  for (int i = 0; i < m; i++) {
    cin >> nums2[i];
  }

  vector<int> result = mergeSortedArrays(nums1, nums2);

  for (int num : result) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
