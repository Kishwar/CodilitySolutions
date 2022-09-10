//
//  main.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 24.01.21.
//

#include <iostream>
#include <vector>

#include "Valid_Parentheses.hpp"


int main(int argc, const char * argv[]) {

    bool r = isValidParentheses("[]{([])[][}][]");
    std::string s = r == true ? "true" : "false";
    
    std::cout << s << std::endl;
    
    return 0;
}
