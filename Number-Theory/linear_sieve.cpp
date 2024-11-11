void linear_sieve(int n){
    Composite[0] = Composite[1] = 1;

    for(int i = 2; i <= n; i++){
        if(!Composite[i])  primes.push_back(i);
        
        for(int j = 0; j < primes.size() && (i * primes[j]) <= n; j++){
            Composite[i * primes[j]] = true;
            if(i % primes[j] == 0) break;
        }
    }
}