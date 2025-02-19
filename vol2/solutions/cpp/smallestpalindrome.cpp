#include <iostream>
#include <string>
using namespace std;

string makeLexicographicallySmallestPalindrome(string s) {
  int n = s.size();
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - i - 1]) {
      s[i] = s[n - i - 1] = min(s[i], s[n - i - 1]);
    }
  }
  return s;
}

int main() {
  string s;
  cin >> s;
  cout << makeLexicographicallySmallestPalindrome(s) << endl;
  return 0;
}
