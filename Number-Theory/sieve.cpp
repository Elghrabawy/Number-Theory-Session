vector<int> sieve(int n){
    vector<int> primes;
    vector<int> isPrime(n + 1, 1);

    isPrime[0] = isPrime[1] = 0;
    for(int i = 2; i * i <= n; i++){ 
        if(isPrime[i]){
            for(int j = i * i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }

    for(int i = 2; i <= n; i++){
        if(isPrime[i]) primes.push_back(i);
    }

    return primes;
}