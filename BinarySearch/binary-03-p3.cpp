// Given a sorted array of nums consisting of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

#include<iostream>
#include<vector>

using namespace std;

int searchInsert(vector<int> &nums, int target);

int main(void){

    return EXIT_SUCCESS;
}

int searchInsert(vector<int> &nums, int target){
    int n = nums.size();

    int st = 0;
    int end = n -1;

    int ans = 0;

    while(st <= end){
        int mid = (st + end) / 2;

        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] > target){
            ans = mid;
            end = mid - 1; // search in the left side of the array
        }else{
            ans = mid + 1;
            st = mid + 1;
        }
    }

    return ans;
}

