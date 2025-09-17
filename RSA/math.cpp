#include <bits/stdc++.h>
#include "crypto.h"

using namespace std;

// Fast exponentiation (a^b % mod)
long long modExp(long long a, long long b, long long mod) {
    long long res = 1;
    a = a % mod;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// GCD using Euclidean Algorithm
long long gcd(long long a, long long b) {
    return (b == 0) ? a : gcd(b, a % b);
}

//using extended euclidian algorithim 
long long modInverse(long long a, long long b) {
    long long m = b;  // store original modulo
    long long t1 = 1, t2 = 0; // coefficients

    while (b) {
        long long q = a / b;
        long long r = a % b;
        a = b;
        b = r;

        long long temp = t1;
        t1 = t2;
        t2 = temp - q * t2;
    }

    if (a != 1) return -1; // inverse doesn't exist

    if (t1 < 0) t1 += m;  // make positive
    return t1;
}
