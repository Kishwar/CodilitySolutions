//
//  Valid_Parentheses.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 10.09.22.
//

#include "Valid_Parentheses.hpp"

/*
 Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

 An input string is valid if:

 Open brackets must be closed by the same type of brackets.
 Open brackets must be closed in the correct order.
 Every close bracket has a corresponding open bracket of the same type.
  

 Example 1:

 Input: s = "()"
 Output: true
 Example 2:

 Input: s = "()[]{}"
 Output: true
 Example 3:

 Input: s = "(]"
 Output: false
 ***/

#include <vector>

bool isValidParentheses(const std::string &v) {
    
    std::vector<char> b;
    
    if (v.size() % 2 != 0) {
        return false;
    }
    
    for(int i=0; i<v.size(); i++) {   // we will scan only once
        if(b.empty() && (v[i] == ')' || v[i] == '}' || v[i] == ']')) {
            return false;
        }
        if(b.empty()) {
            b.push_back(v[i]);
        } else {
            switch(v[i]) {
                case ')':
                    if(b.back() != '(') {
                        return false;
                    }
                    b.pop_back();
                    break;
                case '}':
                    if(b.back() != '{') {
                        return false;
                    }
                    b.pop_back();
                    break;
                case ']':
                    if(b.back() != '[') {
                        return false;
                    }
                    b.pop_back();
                    break;
                default:
                    b.push_back(v[i]);
                    break;
            }
        }
    }
    
    return b.empty();
}
