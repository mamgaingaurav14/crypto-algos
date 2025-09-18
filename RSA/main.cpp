#include <bits/stdc++.h>
#include "rsa.h"
#include "../math.h"
using namespace std;

void print_vec(vector<long long > vec){
   for(auto it:vec) cout<<it<<" ";
   cout<<endl;
}

int main(){


//selecting input values 
long long p = 101;      // a prime
long long q = 103;      // large prime
long long e = 19;       //public key less than phi(n)
   
    RSA obj1(p,q,e);
    string og="hello world!!";

//calculation of cipher blocks
    vector<long long> cipher_blocks=obj1.encrypt(og);
    string res=obj1.decrypt(cipher_blocks);

//print outs 
    cout<<"original string  " << (og)<<endl;
    print_vec(cipher_blocks);
    cout<<"cipher->string  " << (res)<<endl;


//we can check whether original string and cypher string are equal 
}