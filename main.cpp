#include <iostream>
#include "Blockchain.h"

int main() {

    Blockchain bChain = Blockchain();

    cout<<"Mining 1 block..."<<endl;
    bChain.addBlock(Block(1, "Block 1 Data"));


    cout<<"Mining 2 block..."<<endl;
    bChain.addBlock(Block(2, "Block 2 Data"));


    cout<<"Mining 3 block..."<<endl;
    bChain.addBlock(Block(3, "Block 3 Data"));



    return 0;
}