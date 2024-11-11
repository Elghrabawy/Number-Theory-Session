int powerRec(int a, int n){
    if(n == 0) return 1; 
    if(n == 1) return a;

    if(n % 2 == 0){
        return powerRec(a * a, n / 2);
    }
    else{
        return a * powerRec(a, n - 1);
    }
}

int powerItr(int a, int n){
    int res = 1;
    while(n != 0){
        if(n % 2 == 0){
            n /= 2;
            a = a * a; 
        }
        else{
            n -= 1;
            res *= a;
        }
    }

    return res;
}