// Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.
// Each input will have exactly one solution, and the same element cannot be used twice.


#include<iostream>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

int main(void){
    vector<int> retVal = {3, 3};

    vector<int> ret = twoSum(retVal, 6);

    for (int num : ret){
        cout << num << " ";
    }

    cout << endl;
    return EXIT_SUCCESS;
}

vector<int> twoSum(vector<int>& nums, int target){
    int n = nums.size();
    int x = 0;
    int y = 0;

    vector<int> retVal;

    for(int i = 0; i != n; ++i){
        for(int j = 1; j != n; ++j){
            if(i != j){
                if(nums[i] + nums[j] == target){
                    x = i;
                    y = j;
                }
            }
        }
    }

    retVal.push_back(x);
    retVal.push_back(y);

    return retVal;
}
