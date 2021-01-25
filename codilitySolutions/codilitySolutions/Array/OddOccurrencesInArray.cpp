//
//  OddOccurrencesInArray.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 24.01.21.
//

#include "OddOccurrencesInArray.hpp"

int OddOccurrencesInArraysolution(std::vector<int> &A) {
    int odd = 0;

    for(auto a : A) {
        odd ^= a;
    }

    return odd;
}
