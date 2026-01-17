// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
// There may be duplicates in the original array.
// Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.

#include<iostream>
#include<vector>

using namespace std;

bool check(vector<int>& nums);

int main(void){

    return EXIT_SUCCESS;
}

bool check(vector<int>& nums){
    int n = nums.size();
    bool retVal = true;
    int num = 0;
    for(int i = 0; i != n; ++i){
        if(nums[i] > nums[(i + 1) % n]){
            num++;
            if(num > 1){
                retVal = false;
            }
        }
    }

    return retVal;
}
