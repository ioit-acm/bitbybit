#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
  set<int> set1(nums1.begin(), nums1.end());
  set<int> result;
  for (int num : nums2) {
    if (set1.count(num)) {
      result.insert(num);
    }
  }
  return vector<int>(result.begin(), result.end());
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

  vector<int> result = intersection(nums1, nums2);
  for (int num : result) {
    cout << num << " ";
  }
  cout << endl;
  return 0;
}
