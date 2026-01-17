// Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.

#include<iostream>
#include<vector>

using namespace std;

int missingNumber(vector<int>& nums);

int main(void){
    vector<int> retVal = {0, 1, 2, 3, 4};
    cout << "Missing number in the array is: " << missingNumber(retVal) << endl;
    return EXIT_SUCCESS;
}

int missingNumber(vector<int>& nums){
    int n = nums.size();

    int nVal = 0;
    for(int i = n; i >= 0; --i){
        nVal = nVal + i;
    }

    int trueVal = 0;

    for(int i = 0; i != n; ++i){
        trueVal = trueVal + nums[i];
    }

    int retVal = nVal - trueVal;

    return retVal;
}

