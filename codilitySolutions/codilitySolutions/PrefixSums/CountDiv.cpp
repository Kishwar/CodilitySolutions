//
//  CountDiv.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 25.01.21.
//

#include "CountDiv.hpp"

int solution(int A, int B, int K) {

    int i = A;
    int first = 0;

    for(; i<=B; i++) {
        if(i % K == 0) {
            first = 1;
            break;
        }
    }

    return ((B - i) / K) + first;
}
