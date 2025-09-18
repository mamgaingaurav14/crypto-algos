
#include <bits/stdc++.h>
#include "dh.h"
#include "../math.h"
#include <random>

using namespace std;



//dh class functions and operations
DH::DH(long long p,long long g){
   this->p=p;
   this->g=g;

   random_device rd; 
   mt19937_64 gen(rd()); // 64-bit Mersenne Twister engine
   uniform_int_distribution<long long> dis(1, p - 1); // private key between 1 and p-1

   this->private_key=dis(gen);
   this->public_key = modExp(g, private_key, p);
   
};

long long DH::computeSharedKey(long long otherPublicKey){
        return modExp(otherPublicKey, private_key, p);
   }
