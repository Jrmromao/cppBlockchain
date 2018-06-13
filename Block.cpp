//
// Created by jrmromao on 13/06/18.
//

#include <sstream>
#include "Block.h"
#include "SHA256.h"



Block::Block() {

}

Block::Block(uint32_t nIndexIn, const string &sDateIn) :
        _nIndex(nIndexIn),
        _sData(sDateIn)
{

    _nOnce = -1;
    _tTime = time(nullptr);


}

string Block::getHash() {
    return _Hash;
}

void Block::MineBlock(uint32_t nDifficulty) {

    char cstr[nDifficulty +1];
    for (uint32_t i = 0; i < nDifficulty; ++i) {
        cstr[i] = '0';
    }

    cstr[nDifficulty] = '\0';

    string str(cstr);


    do{
        _nOnce++;
        _Hash = _calculateHash();
    }while (_Hash.substr(0, nDifficulty) != str);

    cout<<"Block mined: "<<_Hash<<endl;

}



inline string Block::_calculateHash() const {

    stringstream ss;

    ss << _nIndex << _tTime << _sData << _nOnce << sPrevHash;

    return sha256(ss.str());


}

