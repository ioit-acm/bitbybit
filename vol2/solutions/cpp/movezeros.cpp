#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums) {
  int index = 0;

  for (int num : nums) {
    if (num != 0) {
      nums[index++] = num;
    }
  }

  while (index < nums.size()) {
    nums[index++] = 0;
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  moveZeroes(nums);

  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
