#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

int all_gcd(vector<int> &a){
    int res = a[0];
    for(auto &el : a) res = gcd(res, el);
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto &el : a) cin >> el;
    for(auto &el : b) cin >> el;

    int gcd_a = all_gcd(a), gcd_b = all_gcd(b);
    cout << (gcd_a % gcd_b && n != 1 ? "No" : "Yes") << endl;
}