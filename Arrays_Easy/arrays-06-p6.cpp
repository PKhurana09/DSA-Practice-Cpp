// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<int>& nums, int k);

int main(void){
    cout << "Array before rotation is below" << endl;
    vector<int> retVal = {1, 2, 3, 4, 5};
    int numLength = retVal.size();

    for(int i = 0; i != numLength; ++i){
        cout << retVal[i] << " " ;
    }

    cout << endl;

    cout << "Array after Rotation with factor n is below" << endl;
    rotate(retVal, 2);
    
    for(int i = 0; i != numLength; ++i){
        cout << retVal[i] << " " ;
    }

    cout << endl;

    return EXIT_SUCCESS;
}

void rotate(vector<int>& nums, int k){
    vector<int> temp;
    int n = nums.size();
    k = k % n;
    for(int i = k; i >= 1; --i){
        temp.push_back(nums[n - i]);
    }

    for(int i = n - 1 - k; i >= 0; --i){
        nums[i + k] = nums[i];
    }

    for(int i = 0; i < k ; ++i){
        nums[i] = temp[i];
    }
}