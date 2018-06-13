//
// Created by jrmromao on 13/06/18.
//

#ifndef BLOCKCHAIN_CPP_BLOCKCHAIN_H
#define BLOCKCHAIN_CPP_BLOCKCHAIN_H

#endif //BLOCKCHAIN_CPP_BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;


class Blockchain {

public:
    Blockchain();
    void addBlock(Block bNew);

private:
    uint32_t nDifficulty;
    vector<Block> _vChain;
    Block _getLAstBlock() const ;



};
