#include <bits/stdc++.h>

using namespace std;

int findSmallestNumber(const vector<int>& A, int P, int N) {
    int left = 1;
    int right = N;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int count = mid;

        for (int num : A) {
            if (num <= mid) {
                count--;
            }
        }

        if (count >= P) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SHERLOCK.INP", "r", stdin);
    freopen("SHERLOCK.OUT", "w", stdout);
    int T;
    cin >> T;

    while (T--) {
        int N, K, P;
        cin >> N >> K >> P;

        vector<int> A(K);
        for (int i = 0; i < K; i++) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        int result = findSmallestNumber(A, P, N);

        cout << result << endl;
    }

    return 0;
}
