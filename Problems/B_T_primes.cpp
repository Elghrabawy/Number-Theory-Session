#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<bool> sieve(int n){
    vector <bool> isPrime(n + 1, 1);
    isPrime[0] = isPrime[1] = 0;

    for(int i = 2; i <= n; i++){
        if(isPrime[i]){
            for(int j = 2 * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    return isPrime;
}
int main() {
    vector <bool> isPrime = sieve(1000000);
    
    int n; cin >> n;
    vector <ll> a(n); for(auto &el : a) cin >> el;

    for(int i = 0; i < n; i++){
        ll sq = sqrt(a[i]);
        cout << (sq * sq == a[i] && isPrime[sq] ? "YES" : "NO") << endl;
    }
}