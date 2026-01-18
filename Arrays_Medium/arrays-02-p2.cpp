// Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order.
// The sorting must be done in-place, without making a copy of the original array.

#include<iostream>
#include<vector>

using namespace std;

void sortZeroOneTwo(vector<int>& nums);

int main(void){
    vector<int> retVal = {1, 0, 2, 1, 0};
    int num = retVal.size();
    cout << "Array after operation" << endl;
    sortZeroOneTwo(retVal);

    for(int i = 0 ; i != num; ++i){
        cout << retVal[i] << " ";
    }

    cout << endl;
    return EXIT_SUCCESS;
}

void sortZeroOneTwo(vector<int>& nums){
    int n = nums.size();
    int zeroN = 0;
    int oneN = 0;
    int twoN = 0;

    for(int i = 0; i != n; ++i){
        if(nums[i] == 0){
            ++zeroN;
        }else if(nums[i] == 1){
            ++oneN;
        }else{
            ++twoN;
        }
    }

    for(int i = 0; i != zeroN; ++i){
        nums[i] = 0;
    }
    for(int i = zeroN; i != zeroN + oneN; ++i){
        nums[i] = 1;
    }
    for(int i = zeroN + oneN; i != zeroN + oneN + twoN; ++i){
        nums[i] = 2;
    }
}
