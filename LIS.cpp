#include <bits/stdc++.h>

using namespace std;
long long nigga(vector<long long>& nums) {
    vector<long long> dp;
    for (long long i = 0; i < nums.size(); i++) {
        auto it = lower_bound(dp.begin(), dp.end(), nums[i]);
        if (it == dp.end())
            dp.push_back(nums[i]);
        else
            *it = nums[i];
    }
    return dp.size();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("LIS.INP", "r", stdin);
    freopen("LIS.OUT", "w", stdout);
    long long n; cin >> n;
    vector<long long> a(n);
    for (long long i = 0 ; i < n; i++) cin >> a[i];
    cout << nigga(a);
    return 0;
}
