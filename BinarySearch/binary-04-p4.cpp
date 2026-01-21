// Given a sorted array of nums and an integer x, write a program to find the upper bound of x.
// The upper bound of x is defined as the smallest index i such that nums[i] > x.
// If no such index is found, return the size of the array.


#include<iostream>
#include<vector>

using namespace std;

int upperBound(vector<int> &nums, int x);

int main(void){

    return EXIT_SUCCESS;
}

int upperBound(vector<int> &nums, int x){
    int n = nums.size();
    int st = 0, end = n-1;
    int ans = n;

    while(st <= end){
        int mid = (st + end)/2;
        if(nums[mid] > x){
            ans = mid;
            end = mid - 1; // search on the left side if there is any other number samller than this in this array which is larger than the target
        }else{
            st = mid + 1;
        }
    }

    return ans;
}
