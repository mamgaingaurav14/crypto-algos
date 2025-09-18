# RSA Algorithm 🔐

## Overview
This module contains a from-scratch implementation of the **RSA public-key cryptosystem** in **C++**.  
It demonstrates key generation, encryption, and decryption of messages using modular arithmetic.

## ✨ Features
- Key generation using two prime numbers **p** and **q**  
- Calculation of **n**, **φ(n)**, **public key (e)**, and **private key (d)**  
- Encryption of plaintext messages (converted into integer blocks)  
- Decryption of ciphertext back into the original message  
- Utility functions for string ↔ integer block conversions  

## 📂 Structure

```
rsa/
├── rsa.cpp # Core RSA class implementation
├── conversion.cpp # Message ↔ block conversion
├── main.cpp # Driver code for testing
├── rsha.h # RSA headers and function declarations
└── README.md # This file

```

## 🛠️ Build & Run

From the project terminal in sub repo RSA:

bash
```
g++ -std=c++17 ../math.cpp *.cpp -o main && ./main

or simply ./run.sh (script)

```


## 📚 Future Improvements
Use larger primes with BigInt support

Add padding schemes (PKCS#1 v1.5, OAEP)

Optimize block size handling for larger messages

