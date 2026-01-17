// Given an array nums of n integers, return true if the array nums is sorted in non-decreasing order or else false.

#include<iostream>
#include<vector>

using namespace std;

bool isSorted(vector<int>& nums);

int main(void){

    return EXIT_SUCCESS;
}

bool isSorted(vector<int>& nums){
    bool retVal = true;
    for(int i = 0; i < nums.size() - 1; ++i){
        if(nums.at(i) > nums.at(i + 1)){
            retVal = false;
            break;
        }
    }
    return retVal;
}