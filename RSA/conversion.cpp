#include <bits/stdc++.h>
#include "crypto.h"

using namespace std;

vector<long long> stringToBlocks(const string msg) {
    int blockSize=1;
    vector<long long> blocks;
    for (size_t i = 0; i < msg.size(); i += blockSize) {
        long long block = 0;
        for (size_t j = i; j < i + blockSize && j < msg.size(); j++) {
            block = block * 1000 + int(msg[j]); // 3 digits per char 0-255 range
        }
        blocks.push_back(block);
    }
    return blocks;
}

string blocksToString(const vector<long long> blocks) {
    string msg = "";int blockSize=1;
    for (long long block : blocks) {
        string blockStr = "";
        for (int i = 0; i < blockSize && block > 0; i++) {
            char c = block % 1000;
            blockStr = c + blockStr; // prepend char
            block /= 1000;
        }
        msg += blockStr;
    }
    return msg;
}
