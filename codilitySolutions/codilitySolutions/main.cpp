//
//  main.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 24.01.21.
//

#include <iostream>
#include <vector>

#include "TwoSum.hpp"


int main(int argc, const char * argv[]) {

    std::vector<int> v = {1, 2, 3, 4};
    
    for(auto a : twoSum(v, 6)) {
        std::cout << a << std::endl;
    }
    
    return 0;
}
