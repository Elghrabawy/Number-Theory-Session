vector<vector<int>> rangeFactorization(int n){
    vector<vector<int>> factors(n + 1);

    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j += i){
            factors[j].push_back(i);
        }
    }

    return factors;
}