// Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.


#include<iostream>
#include<vector>

using namespace std;

int secondLargestElement(vector<int>& nums);

int main(void){
    vector<int> retVal = {5};

    cout << "The second largest number is: " << secondLargestElement(retVal) << endl;

    return EXIT_SUCCESS;
}

int secondLargestElement(vector<int>& nums){
    int numLength = nums.size();
    int largest = nums[0];
    int secondLargest = -1;

    for(int i = 1; i != numLength; ++i){
        if(nums[i] > largest){
            secondLargest = largest;
            largest = nums[i];
        }
        if(nums[i] > secondLargest && nums[i] < largest){
            secondLargest = nums[i];
        }
    }

    return secondLargest;
}