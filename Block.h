//
// Created by jrmromao on 13/06/18.
//

#ifndef BLOCKCHAIN_CPP_BLOCK_H
#define BLOCKCHAIN_CPP_BLOCK_H

#endif //BLOCKCHAIN_CPP_BLOCK_H

#include <cstdint>
#include <iostream>


using namespace std;


class Block{


public:
    string sPrevHash;
    string getHash();
    void MineBlock(uint32_t nDifficulty);
    Block();
    Block(uint32_t nIndexIn, const string &sDateIn);

private:
    uint32_t _nIndex;
    int _nOnce;
    string _sData;
    string _Hash;
    time_t  _tTime;
    string _calculateHash() const ;

};