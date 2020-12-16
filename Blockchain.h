//
// Created by Rafi RE on 25/11/2020.
//
//
//  Blockchain.h
//  BlockChainExample

#ifndef Blockchain_h
#define Blockchain_h

#include <vector>

// Blockchain Class
class Blockchain
{
private:
    Block createGenesisBlock();
    std::vector<Block> chain;

public:
    // Constuctor
    Blockchain();

    // Public Functions
    std::vector<Block> getChain();
    Block *getLatestBlock();
    bool isChainValid();
    void addBlock(TransactionData data);
    void printChain();
};

#endif /* Blockchain_h */