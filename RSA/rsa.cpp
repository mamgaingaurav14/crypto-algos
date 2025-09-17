#include <bits/stdc++.h>
#include "crypto.h"
using namespace std;


RSA::RSA(long long p, long long q,long long e) {
        this->p = p;
        this->q = q;
        this->e = e;
        n = p * q;
        phi = (p - 1) * (q - 1);
        // Compute d
        d = modInverse(e, phi);
    } 

//encyrpt the message
vector<long long> RSA::encrypt(string msg) {
        vector<long long> blocks=stringToBlocks(msg);
        for(auto &it:blocks) it=modExp(it, e, n); //make cypher blocks for each block
        return blocks;
        /*
        cout<<
        string cipher=blocksToString(blocks);//convert cypher blocks to a string
        return cipher; //return the cypher string
        */
    }

// Decrypt integer ciphertext
string RSA::decrypt(vector<long long> cipher) {
       // vector<long long> blocks=stringToBlocks(cipher); //cypher blocks
        for(auto &it:cipher) it=modExp(it, d, n); //revert cypher blocks to original blocks
       
        string msg=blocksToString(cipher);//convert original blocks to og string
        return msg; //return the msg string
    }