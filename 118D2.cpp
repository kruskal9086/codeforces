#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a;

bool possible(int d) {
  int total = 0;
  for (int i = 0; i < n; i++) {
    total += max(a[i] - i / d, 0);
  }
  return total >= m;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n >> m;
  a.resize(n);
  int total = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    total += a[i];
  }
  if (total < m) {
    cout << -1 << endl;
  } else {
    sort(a.rbegin(), a.rend());
    int l = 1, h = n;
    while (l < h) {
      int m = (l + h) / 2;
      if (possible(m)) {
        h = m;
      } else {
        l = m + 1;
      }
    }
    cout << l << endl;
  }
  return 0;
}
