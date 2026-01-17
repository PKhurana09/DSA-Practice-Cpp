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
    int retVal = 0;

    for(int num : nums){
        retVal = retVal ^ num;
    }

    return retVal;
}