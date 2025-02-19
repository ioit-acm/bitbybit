#include <iostream>
#include <string>
using namespace std;

int longestRepetition(const string &dna) {
  int max_length = 1, current_length = 1;

  for (size_t i = 1; i < dna.size(); i++) {
    if (dna[i] == dna[i - 1]) {
      current_length++;
    } else {
      max_length = max(max_length, current_length);
      current_length = 1;
    }
  }

  return max(max_length, current_length);
}

int main() {
  string dna;
  cin >> dna;
  cout << longestRepetition(dna) << endl;
  return 0;
}
