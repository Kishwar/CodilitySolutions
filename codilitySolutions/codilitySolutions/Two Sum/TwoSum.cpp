//
//  TwoSum.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 10.09.22.
//

#include "TwoSum.hpp"

/*
 Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 You may assume that each input would have exactly one solution, and you may not use the same element twice.
 You can return the answer in any order.

 Example:

 Input: nums = [2,7,11,15], target = 9
 Output: [0,1]
 Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 Example 2:

 Input: nums = [3,2,4], target = 6
 Output: [1,2]
 **/

#include <iostream>
#include <unordered_map>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    
    std::vector<int> v;
    std::unordered_map<int, int> m;
    
    /*
       [1 2 3 4] target 5
     
       i = 0   -> look key 4 (5-1) -> not found -> m[1] = 0
       i = 1   -> look key 3 (5-2) -> not found -> m[2] = 1
       i = 2   -> look key 2 (5-3) -> found -> return [1 2]
     **/
    
    
    for(int i=0; i<nums.size(); i++) {
        int diff = target - nums[i];
        
        if(m.find(diff) != m.end()) {
            v.push_back(m[diff]);
            v.push_back(i);
            return v;
        }
        m[nums[i]] = i;
    }
    
    return v;
}
