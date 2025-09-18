#ifndef CRYPTO_H  
#define CRYPTO_H

class DH{
    public:
    long long public_key,p,g,private_key;
    DH(long long p,long long g);
   long long computeSharedKey(long long other_publickey);
};

#endif 
