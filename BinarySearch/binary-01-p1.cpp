// Given a sorted array of integers nums with 0-based indexing, find the index of a specified target integer. If the target is found in the array, return its index. If the target is not found, return -1.

#include<iostream>
#include<vector>

using namespace std;

int search(vector<int> &nums, int target);

int main(void){
    vector<int> retVal = {-1, 0, 3, 5, 9, 12, 15};
    // int n = retVal.size();

    cout << "The target value exists at: " << search(retVal, 15) << endl;
    return EXIT_SUCCESS;
}

int search(vector<int> &nums, int target){
    int st = 0; 
    int end = nums.size() - 1;
    while(st <= end){
        int mid = (st + end)/2;
        if(target > nums[mid]){
            st = mid + 1;
        }else if(target < nums[mid]){
            end = mid - 1;
        }else{
            return mid;
        }
    }

    return -1;
}






// <--------------------------------IMPORTANT------------------------------------>

// Linear Search Approach

// int search(vector<int> &nums, int target){
//     int n = nums.size();
//     for(int i = 0; i != n; ++i){
//         if(nums[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }
