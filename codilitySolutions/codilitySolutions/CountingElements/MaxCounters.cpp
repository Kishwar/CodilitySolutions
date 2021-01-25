//
//  MaxCounters.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 25.01.21.
//
// Correctness 100%, Performance 60%

#include "MaxCounters.hpp"

std::vector<int> MaxCounterssolution(int N, std::vector<int> &A) {
    
    std::vector<int>B(N, 0);
    int MaxValue = 0;

    for(int i=0; i<A.size(); i++) {
        if(A[i] == N+1) {
            B.assign(N, MaxValue);
        } else {
            B[--A[i]]++;
            if(B[A[i]] > MaxValue) {
                MaxValue = B[A[i]];
            }
        }
    }
    return B;
}
