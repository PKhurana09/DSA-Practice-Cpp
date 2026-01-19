// Given a sorted array of nums consisting of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

#include<iostream>
#include<vector>

using namespace std;

int searchInsert(vector<int> &nums, int target);

int main(void){
    vector<int> retVal = {1, 3, 5, 6};
    cout << "Insert the element at: " << searchInsert(retVal, 5) << endl;

    return EXIT_SUCCESS;
}

int searchInsert(vector<int> &nums, int target){
    int st = 0;
    int end = nums.size() - 1;
    int retVal = -1;
    int retVal2 = -1;

    while(st <= end){
        int mid = (end + st)/2;

        if(target > nums[mid]){
            st = mid + 1;
        }else if(target < nums[mid]){
            end = mid - 1;
        }else{
            retVal = mid;
        }
        retVal2 = mid;
    }

    if(retVal == -1){
        return retVal2 + 1;
    }else{
        return retVal;
    }
}

