//
//  BinaryGap.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 24.01.21.
//

#include "BinaryGap.hpp"
#include <iostream>
#include <bitset>

#define ONE   1

using namespace std;

int BinaryGap_solution(int N) {
    
    auto bin = bitset<32>(N);
    bool hitOne = false;
    int maxCounter = 0;
    int counter = 0;
    
    for(uint i=0; i<bin.size(); i++) {
        if(bin[i] == ONE) {
            if(hitOne == false) {
                hitOne = true;
                counter = 0;
            } else {
                maxCounter < counter ? maxCounter = counter : 0;
                counter = 0;
            }
        } else {
            if(hitOne == true) {
                counter++;
            }
        }

    }
    
    return maxCounter;
}
