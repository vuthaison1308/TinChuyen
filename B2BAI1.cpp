#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,kq,k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("B2BAI1.inp","r",stdin);
    freopen("B2BAI1.out","w",stdout);
    cin>>n >> k;
    kq=(n%(6*k))*((n+1)%(6*k))*((2*n+1)%(6*k))%(6*k)/6;
    cout<<kq%k;
}
