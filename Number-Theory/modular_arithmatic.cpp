int modSum(int a, int b, int m){
    return ((a % m) + (b % m)) % m;
}

int modMul(int a, int b, int m){
    return ((a % m) * (b % m)) % m;
}

int modSub(int a, int b, int m){
    return ((a % m) - (b % m) + m) % m;
}

int modNeg(int a, int m){
    return ((a % m) + m) % m;
}

int modPow(int a, int n, int m){
    if(n == 0) return 1; 
    if(n == 1) return a;

    if(n % 2 == 0){
        return modPow(modMul(a, a, m), n / 2, m);
    }
    else{
        return modMul(a, modPow(a, n - 1, m), m);
    }
}