//
// Created by Rafi RE on 25/11/2020.
//
//
//  main.cpp
//  BlockChainExample
#include <iostream>
#include <ctime>
#include <vector>

#include "TransactionData.h"
#include "Block.h"
#include "Blockchain.h"

using namespace std;

int main()
{
    // Start Blockchain
    Blockchain SabichCoin;

    // Data for first block
    time_t data1Time;
    TransactionData data1(1.5, "Joe", "Sally", time(&data1Time));
    SabichCoin.addBlock(data1);

    time_t data2Time;
    TransactionData data2(0.2233, "Martha", "Fred", time(&data2Time));
    SabichCoin.addBlock(data2);

    // Let's see what's in the SabichCoin blockchain!
    SabichCoin.printChain();

    // Is it valid?
    printf("\nIs chain still valid? %d\n", SabichCoin.isChainValid());

    // Someone's getting sneaky
    Block *hackBlock = SabichCoin.getLatestBlock();
    hackBlock->data.amount = 10000; // Oh yeah!
    hackBlock->data.receiverKey = "Jon"; // mwahahahaha!

    // Let's look at data
    SabichCoin.printChain();

    // Awww! Why is it not valid?
    printf("\nIs chain still valid? %d\n", SabichCoin.isChainValid());

    return 0;
}


