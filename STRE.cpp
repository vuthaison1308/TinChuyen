#include <bits/stdc++.h>

using namespace std;
long long n, a[100000], kq, x;
map < int, int > mp;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  freopen("stre.inp", "r", stdin);
  freopen("stre.out", "w", stdout);
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    mp[x] += 1;
  }
  kq = 0;
  for (auto it: mp)
    if (it.second % 2 != 0) kq = kq + 1;
  if ((kq + n) % 4 != 0) kq = kq + (4 - ((kq + n) % 4));
  cout << kq;
  return 0;
}
