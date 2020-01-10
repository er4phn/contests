#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    return b ? gcd(b, a % b) : a;
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long X;
    cin >> X;
    vector<long long> divisors;
    for (long long i = 1; i * i <= X; ++i) {
        if (X % i == 0) {
            divisors.push_back(i);
            divisors.push_back(X / i);
        }
    }
    long long ans = X;
    pair<long long, long long> ans_divs = {1, X};
    for (int i = 0; i < (int)divisors.size(); ++i) {
        if (lcm(divisors[i], X / divisors[i]) != X) {
            continue;
        }
        if (ans > max(divisors[i], X / divisors[i])) {
            ans = max(divisors[i], X / divisors[i]);
            ans_divs.first = divisors[i];
            ans_divs.second = X / divisors[i];
        }
    }
    cout << ans_divs.first << ' ' << ans_divs.second << endl;
    return 0;
}

