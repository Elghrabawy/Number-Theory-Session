int gcd(int a, int b){ // iterative
    while(b != 0){
        a = a % b;
        swap(a, b);
    }
    return a;
}

int gcd(int a, int b){ // recursion
    if(b == 0) return a;
    return gcd(b, a % b);
}


int lcm(int a, int b){
    return a / gcd(a, b) * b;
}