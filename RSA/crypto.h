#ifndef CRYPTO_H  
#define CRYPTO_H

#include <bits/stdc++.h>
using namespace std;

//math functions
long long modExp(long long a, long long b, long long mod);
long long gcd(long long a, long long b);
long long modInverse(long long a, long long b);


//encryption decrption string conversion function
string blocksToString(const vector<long long> blocks);
vector<long long> stringToBlocks(const string msg);

//rsa model
class RSA{
     public:
    long long p, q,phi, d; 
    long long e,n;
    RSA(long long p, long long q,long long e);
    vector<long long> encrypt(string msg);
    string decrypt(vector<long long> cipher);
};
#endif 
