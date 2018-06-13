//
// Created by jrmromao on 13/06/18.
//

#include "Blockchain.h"

Blockchain::Blockchain() {
    _vChain.emplace_back(Block(0, "Genesis Block"));
    nDifficulty = 6;
}

void Blockchain::addBlock(Block bNew) {

    bNew.sPrevHash = _getLAstBlock().getHash();
    bNew.MineBlock(nDifficulty);
    _vChain.push_back(bNew);
}

Block Blockchain::_getLAstBlock() const {
    return _vChain.back();
}