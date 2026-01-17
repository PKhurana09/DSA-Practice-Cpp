// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<int>& nums);

int main(void){
    vector<int> retVal = {1, 2, 3, 4, 5};
    int size = retVal.size();

    rotate(retVal);
    for(int i = 0; i != size; ++i){
        cout << retVal[i] << " ";
    }

    return EXIT_SUCCESS;
}

void rotate(vector<int>& nums){
    int n = nums.size();
    int retNum = nums[n - 1];

    for(int i = n - 2; i >= 0; --i){
        nums[i + 1] = nums[i];
    }
    nums[0] = retNum;
}