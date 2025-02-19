#include <iostream>
#include <vector>
using namespace std;

void multiplyMatrices(vector<vector<int>> &A, int n1, int m1,
                      vector<vector<int>> &B, int n2, int m2) {
  if (m1 != n2) {
    cout << "Not Possible" << endl;
    return;
  }

  vector<vector<int>> C(n1, vector<int>(m2, 0));

  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < m2; j++) {
      for (int k = 0; k < m1; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < m2; j++) {
      cout << C[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int n1, m1, n2, m2;

  cin >> n1 >> m1;
  vector<vector<int>> A(n1, vector<int>(m1));

  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < m1; j++) {
      cin >> A[i][j];
    }
  }

  cin >> n2 >> m2;
  vector<vector<int>> B(n2, vector<int>(m2));

  for (int i = 0; i < n2; i++) {
    for (int j = 0; j < m2; j++) {
      cin >> B[i][j];
    }
  }

  multiplyMatrices(A, n1, m1, B, n2, m2);

  return 0;
}
