#include <bits/stdc++.h>

using namespace std;

int main() {
  int m, i = 0;
  float p = 0, n = 0, z = 0;
  float f;
  cin >> m;
  int a[m];
  for (i = 0; i < m; i++) {
    cin >> a[i];
    if (a[i] > 0) {
      p = p + 1;
    } else if (a[i] < 0) {
      n = n + 1;
    } else if (a[i] == 0) {
      z = z + 1;
    }
  }

  f = p / m;
  cout << setprecision(4) << f << endl;
  f = n / m;
  cout << setprecision(4) << f << endl;
  f = z / m;
  cout << setprecision(4) << f;
  return 0;
}
