# Diffie–Hellman Key Exchange 🔑
##  Overview

This module contains a from-scratch implementation of the Diffie–Hellman (DH) key exchange protocol in C++.
It demonstrates how two parties can securely establish a shared secret over an insecure channel using modular arithmetic.

## ✨ Features

Generation of large prime modulus p and primitive root g

Private key selection for both participants (a, b)

Calculation of public keys (A = g^a mod p, B = g^b mod p)

Secure computation of shared secret (s = B^a mod p = A^b mod p)

Utility functions for modular exponentiation

📂 Structure

```
diffie_hellman/
├── main.cpp # Core Diffie–Hellman class implementation
├── class.cpp # class code for frame
├── dh.h # DH class and function declarations
└── README.md # This file

```

## 🛠️ Build & Run

From the project terminal in sub repo diffie_hellman:

g++ -std=c++17 ../math.cpp *.cpp -o main && ./main

# or simply use
./run.sh

## 📚 Future Improvements

Support for Elliptic Curve Diffie–Hellman (ECDH)

Integration with real-world cryptographic libraries (e.g., OpenSSL)

Input validation and error handling for security hardening