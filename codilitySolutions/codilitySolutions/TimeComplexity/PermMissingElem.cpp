//
//  PermMissingElem.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 24.01.21.
//

#include "PermMissingElem.hpp"

int PermMissingElemsolution(std::vector<int> &A) {
    
    int M = static_cast<int>((int)A.size()) +1;

    for(int i=0; i<A.size(); i++) {
        M = M ^ A[i] ^ (i+1);
    }

    return M;
}
