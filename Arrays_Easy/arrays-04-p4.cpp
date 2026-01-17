// Rotate an array 1 towards left
// Given an integer array nums, rotate the array to the left by one.
// Note: There is no need to return anything, just modify the given array.


#include<iostream>
#include<vector>

using namespace std;

void rotateArrayByOne(vector<int>& nums);

int main(void){
    cout << "Below is the given array" << endl;
    vector<int> retVal = {1, 2, 3, 4, 5};
    int retLength = retVal.size();

    for(int i = 0; i != retLength; ++i){
        cout << retVal[i] << " ";
    }
    cout << endl;

    rotateArrayByOne(retVal);
    cout << "Array after rotation is below" << endl;

    for(int i = 0; i != retLength; ++i){
        cout << retVal[i] << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}

void rotateArrayByOne(vector<int>& nums){
    int numLength = nums.size();
    int retNum = nums[0];

    for(int i = 1; i != numLength; ++i){
        nums[i - 1] = nums[i];
    }

    nums[numLength - 1] = retNum;
}