
#include <bits/stdc++.h>

#include "../math.h"
#include "dh.h"

using namespace std;

int main(){
   DH d1(23,5);
   DH d2(23,5); //same primite roots and prime no
   cout<<"private key of d1  " << (d1.private_key)<<endl;
   cout<<"public key of d1   " << (d1.public_key)<<endl;

   cout<<"private key of d2  " << (d2.private_key)<<endl;
   cout<<"public key of d2   " << (d2.public_key)<<endl;

   cout<<"shared key using d1  " << d1.computeSharedKey(d2.public_key)<<endl;
   cout<<"shared key using d2  " << d2.computeSharedKey(d1.public_key)<<endl;
}