// Given a binary array nums, return the maximum number of consecutive 1s in the array.
// A binary array is an array that contains only 0s and 1s.

#include<iostream>
#include<vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums);

int main(void){
    vector<int> retVal = {1, 1, 0, 0, 1, 1, 1, 0};

    cout << "Maximum number of consecutive 1's are: " << findMaxConsecutiveOnes(retVal) << endl;

    return EXIT_SUCCESS;
}

int findMaxConsecutiveOnes(vector<int>& nums){
    int n = nums.size();
    int temp = 0;
    int maxCount = 0;
    for(int i = 0; i != n; ++i){
        if(nums[i] == 1){
            ++temp;
            if(temp > maxCount){
                maxCount = temp;
            }
        }else{
            temp = 0;
        }
    }
    return maxCount;
}