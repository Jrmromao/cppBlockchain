#include <iostream>
#include <fstream>
#include "Blockchain.h"

int main() {


    Blockchain bChain = Blockchain();

    Block b = Block();
    ofstream myFile;
    myFile.open("blockFile.txt", ios::in | ios::out | ios::app);
    myFile << "Writing to my file!\n";
    myFile.close();



    string fileContents;
    string fileHash;
    ifstream readFile;

    readFile.open("blockFile.txt");
    readFile >> fileContents;


    fileHash = b.hashFile(fileContents);


    cout<<"Mining 1 block..."<<endl;
    bChain.addBlock(Block(1, fileHash));


    cout<<"Mining 2 block..."<<endl;
    bChain.addBlock(Block(2, "Block 2 Data"));


    cout<<"Mining 3 block..."<<endl;
    bChain.addBlock(Block(3, "Block 3 Data"));



    return 0;
}