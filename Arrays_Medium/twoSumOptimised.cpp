// Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.
// Each input will have exactly one solution, and the same element cannot be used twice.


#include<iostream>
#include<vector>
#include<unordered_map>

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
    unordered_map<int, int> seen;
    // key -> number
    // value -> index
    int n = nums.size();
    

    for(int i = 0; i != n; ++i){
        int numberNeeded = target - nums[i];

        if(seen.find(numberNeeded) != seen.end()){
            return {seen[numberNeeded], i};
        }

        // store the number with it's index
        seen[nums[i]] = i;
    }

    return {}; // Will never come true because solution is always guaranteed in the problem
}
