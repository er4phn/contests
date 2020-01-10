#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    long long allSum = 0;
    long long segSum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        allSum += a[i];
    }
    long long curSum = 0;
    for (int i = 1; i < n; ++i) {
        curSum = max(curSum + a[i], 0LL);
        segSum = max(segSum, curSum);
    }
    curSum = 0;
    for (int i = 0; i < n - 1; ++i) {
        curSum = max(curSum + a[i], 0LL);
        segSum = max(segSum, curSum);
    }
    if (segSum < allSum) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int TT;
    cin >> TT;
    while (TT--) {
        solve();
    }
    return 0;
}

