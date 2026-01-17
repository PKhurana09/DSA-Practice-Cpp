// Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.


// TO BE COMPLETED
#include<iostream>
#include<vector>

using namespace std;

int singleNumber(vector<int>& nums);

int main(void){
    vector<int> retVal = {1, 2, 2, 4, 3, 1, 4};
    cout << "The number that only appeared once is: " << singleNumber(retVal) << endl;
    return EXIT_SUCCESS;
}

int singleNumber(vector<int>& nums){
    int n = nums.size();
    int retVal = 0;

    for(int i = 0; i != n; ++i){
        int temp = 0;
        int val = nums[i];
        for(int j = 0; j != n; ++j){
            if(nums[j] == val){
                temp++;
            }
        }
        if(temp == 1){
            retVal = nums[i];
        }
    }

    return retVal;
}