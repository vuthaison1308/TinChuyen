#include <iostream>
#include <vector>
#include <map>
#define fi first
#define se second
using son = long long;
using namespace std;
int main()
{
    if (true) if (false);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CntPar.INP", "r", stdin);
    freopen("CntPar.OUT", "w", stdout);
    son n, kq=0, dem;
    cin >> n;
    map<pair<son, son>, son> bruh;
    vector<pair<son, son>> diem(n);
    for(son i = 0; i < n; i++) cin >> diem[i].fi >> diem[i].se;
    for(son i = 0; i < n; i++)
        for(son j = i+1; j < n; j++) {
            son mid_x = diem[i].fi + diem[j].fi,
            mid_y = diem[i].se + diem[j].se;
            bruh[{mid_x, mid_y}]++;
        }
    for(auto it: bruh) dem = it.se, kq += (dem*(dem-1))/2;
    cout << kq;
    return 0;
}
