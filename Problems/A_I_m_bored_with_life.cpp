#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ll a, b; cin >> a >> b;
    if(b > a) swap(a, b);
 
    ll ans = 1;
    for(int i = 1; i <= b; i++){
        ans *= i;
    }
 
    cout << ans << endl;
}