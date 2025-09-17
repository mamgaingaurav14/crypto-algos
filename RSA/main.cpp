#include <bits/stdc++.h>
#include "crypto.h"
using namespace std;

void print_vec(vector<long long > vec){
   for(auto it:vec) cout<<it<<" ";
   cout<<endl;
}


int main(){

long long p = 101;      // a prime
long long q = 103;      // large prime
long long e = 19;       //public key less than phi(n)
    RSA obj1(p,q,e);

    string og="hello world!!";
    vector<long long> ci=obj1.encrypt(og);
    cout<<og<<endl<<" cipher blocks ";
    print_vec(ci);
    string rec=obj1.decrypt(ci);
    cout<<rec<<"  revert back"<<endl;

}