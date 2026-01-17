// Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same.
// This must be done in place, without making a copy of the array.

#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums);

int main(void){
    vector<int> retVal = {0, 1, 4, 0, 5, 2};
    int size = retVal.size();
    cout << "Array before is below: " << endl;

    for(int i = 0; i != size; ++i){
        cout << retVal[i] << " ";
    }

    cout << endl;

    cout << "Array after operation is below: " << endl;

    moveZeroes(retVal);

    for(int i = 0; i != size; ++i){
        cout << retVal[i] << " ";
    }

    cout << endl;

    return EXIT_SUCCESS;
}

void moveZeroes(vector<int>& nums){
    int n = nums.size();
    int nonZeroPointer = 0;

    for(int i = 0; i != n; ++i){
        if(nums[i] != 0){
            nums[nonZeroPointer] = nums[i];
            nonZeroPointer++;
        }
    }

    for(int i = nonZeroPointer; i != n; ++i){
        nums[i] = 0;
    }
    
}

