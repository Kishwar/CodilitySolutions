//
//  TapeEquilibrium.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 24.01.21.
//

#include "TapeEquilibrium.hpp"


int TapeEquilibriumsolution(std::vector<int> &A) {
    int head = *A.begin();
    int tail = accumulate(A.begin()+1, A.end(), 0);
    int minSum = abs(head - tail);

    for(int i=1; i<A.size()-1; i++) {
        head += A[i];
        tail -= A[i];
        if(abs(head - tail) < minSum) {
            minSum = abs(head - tail);
        }
    }

    return minSum;
}
