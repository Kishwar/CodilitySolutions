//
//  FrogRiverOne.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 25.01.21.
//

#include "FrogRiverOne.hpp"

int solution(int X, std::vector<int> &A) {
    
    std::vector<int> B(A.size(), 0);
    int nf = X;

    for(int i = 0; i<A.size(); i++)  {
        if(B[--A[i]] == 0) {
            B[A[i]] = 1;
            nf--;
            if(nf == 0) {
                return i;
            }
        }
    }
    return -1;
}
