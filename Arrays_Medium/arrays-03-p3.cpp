// Given an integer array nums of size n, return the majority element of the array.
// The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.


#include<iostream>
#include<vector>

using namespace std;

int majorityElement(vector<int>& nums);

int main(void){
    vector<int> retVal = {7, 0, 0, 1, 7, 7, 2, 7, 7};

    cout << "Majority element here is: " << majorityElement(retVal);
    
    return EXIT_SUCCESS;
}


int majorityElement(vector<int>& nums){
    int n = nums.size();
    int count = 0;
    int majElement = nums[0];

    for(int i = 0; i != n; ++i){
        if(nums[i] == majElement){
            ++count;
        }else{
            --count;
        }

        if(count == 0){
            if (i <= n-1){
                majElement = nums[i + 1];
            }
        }
    }

    return majElement;
}
