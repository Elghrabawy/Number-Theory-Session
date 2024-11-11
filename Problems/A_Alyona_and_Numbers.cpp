#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, m; cin >> n >> m;

    int ans = 0;
    ans += (n / 5) * (m / 5);
    ans += ((n + 1) / 5) * ((m + 4) / 5);
    ans += ((n + 2) / 5) * ((m + 3) / 5);
    ans += ((n + 3) / 5) * ((m + 2) / 5);
    ans += ((n + 4) / 5) * ((m + 1) / 5);

    cout << ans << endl;
}