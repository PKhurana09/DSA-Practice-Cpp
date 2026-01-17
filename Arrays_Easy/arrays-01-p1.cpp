// p1. Given an array of integers nums, return the value of the largest element in the array

#include<iostream>
#include<vector>

using namespace std;

int largestElement(vector<int>& nums);

int main(void){
    cout << "below is the vector that I am trying to find the largest number in: " << endl;

    vector<int> retVal = {9, 4, 7, 3, 1, 25};
    cout << "Largest number in the given vector is: " << largestElement(retVal);
    return EXIT_SUCCESS;
}

// int largestElement(vector<int>& nums){
//     int numLength = nums.size();

//     for(int i = numLength - 1; i >= 0; --i){
//         bool swapped = false;
//         for(int j = 0; j < i; ++j){
//             if(nums[j] > nums[j + 1]){
//                 int retVal = nums[j + 1];
//                 nums[j + 1] = nums[j];
//                 nums[j] = retVal;
//                 swapped = true;
//             }
//         }
//         if(!swapped){
//             break;
//         }
//     }

//     return nums[numLength - 1];
// }

int largestElement(vector<int>& nums){
    int numLength = nums.size();
    int largest = nums[0];
    for(int i = 1; i != numLength; ++i){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    return largest;
}