//
//  PermCheck.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 25.01.21.
//

#include "PermCheck.hpp"

int PermChecksolution(std::vector<int> &A) {
    
    std::set<int> B(A.begin(), A.end());
    int sumB = std::accumulate(B.begin(), B.end(), 0);
    
    std::vector<int> C(A.size());
    std::iota(C.begin(), C.end(), 1);
    int sumC = std::accumulate(C.begin(), C.end(), 0);

    if((sumB - sumC) != 0) {
        return 0;
    }

    return 1;
}
