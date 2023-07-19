#include <bits/stdc++.h>
using namespace std;
long long n, k, num;
string s;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    cin >> n >> s >> k;
    for (long long i = 0; i < s.size(); i++)
        if (isupper(s[i])){
            num = int(s[i]);
            if (num<=87){
                num+=k;
            }
            else{
                for (k; k > 0; k--){
                    num++;
                    if (num>90) num = 65;
                }
            }
            s[i]=char(num);
        }
        else if (islower(s[i])){
            num = int(s[i]);
            if (num<=119){
                num+=k;
            }
            else{
                for (k; k > 0; k--){
                    num++;
                    if (num>122) num = 97;
                }
            }
            s[i]=char(num);
        }
    cout << s;
    return 0;
}

