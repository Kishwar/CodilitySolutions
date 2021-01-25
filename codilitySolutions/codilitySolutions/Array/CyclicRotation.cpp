//
//  CyclicRotation.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 24.01.21.
//

/*
 PROBLEM:
   Rotates an array with right shift by given number of values in K
 
   For example, A = [3, 8, 9, 7, 6] and K = 3  -> [9, 7, 6, 3, 8]
 
   Shift 1: [3, 8, 9, 7, 6] -> [6, 3, 8, 9, 7]
   Shift 2: [6, 3, 8, 9, 7] -> [7, 6, 3, 8, 9]
   Shift 3: [7, 6, 3, 8, 9] -> [9, 7, 6, 3, 8]
 */
#include "CyclicRotation.hpp"

std::vector<int> CyclicRotationsolution(std::vector<int> &A, int K) {
    int J = 0;

    if(A.size() == 0) return A;
    
    if(A.size() > K) {
        J = static_cast<int>(A.size() - K);
    } else {
        J = static_cast<int>(A.size() - (K % A.size()));
    }

    std::rotate(A.begin(), A.begin() + J, A.end());
    return A;
}
