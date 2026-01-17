// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.


#include<iostream>
#include<vector>
#include<algorithm>

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
    int n = nums.size();
    k = k % n;

    // Step 1: reverse the entire array
    reverse(nums.begin(), nums.end());

    // Step 2: Reverse first k elements
    reverse(nums.begin(), nums.begin() + k);

    // Step 3: Reverse remaining elements
    reverse(nums.begin() + k, nums.end());
}