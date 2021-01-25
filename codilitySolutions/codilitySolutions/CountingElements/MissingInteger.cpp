//
//  MissingInteger.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 25.01.21.
//

#include "MissingInteger.hpp"


int solution(std::vector<int> &A) {
    
    std::vector<int>B(A.size(), 0);

    for(int i=0; i<A.size(); i++) {
        if(A[i] > 0 && A[i] <= A.size()) {
            B[--A[i]] = 1;
        }
    }
    
    for(int i=0; i<B.size(); i++) {
        if(B[i] == 0) {
            return i + 1;
        }
    }

    return A.size()+1;
}
