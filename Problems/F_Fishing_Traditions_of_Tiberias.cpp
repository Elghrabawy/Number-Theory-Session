#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &el : a) cin >> el;
    
        map<int, int> mp; 
        for(int i = 0; i < n; i++){
            mp[a[i]] = i;
        }
    
        int shift = 0;
    
        int q; cin >> q;
        while(q--){
            int t, x; cin >> t >> x;
    
            if(t == 1){
                shift += x;
            }
            else{
                if(mp.count(x)) cout << ((mp[x] + shift) % n + n) % n + 1 << endl;
                else cout << -1 << endl; 
            }
        }
    }
}