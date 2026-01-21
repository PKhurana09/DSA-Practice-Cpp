// Given a sorted array of nums and an integer x, write a program to find the lower bound of x.
// The lower bound algorithm finds the first and smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.
// If no such index is found, return the size of the array.

#include<iostream>
#include<vector>

using namespace std;

int lowerBound(vector<int> &nums, int x);

int main(void){
    vector<int> retVal = {1, 2, 2, 3};

    cout << "Lower bound of this vector is: " << lowerBound(retVal, 5);
    return EXIT_SUCCESS;
}

int lowerBound(vector<int> &nums, int x){
    int n = nums.size();
    int st = 0, end = n - 1;

    int ans = n;

    while(st <= end){
        int mid = (st + end) / 2;

        if(nums[mid] >= x){
            ans = mid;
            end = mid - 1; // Search in first half
        }else{
            st = mid + 1; // Search in second half
        }
    }
    return ans;
}





// Using linear approach. In worst case scenario in this case time taken is O(N)
// int lowerBound(vector<int> &nums, int x){
//     int n = nums.size();

//     for(int i = 0; i != n; ++i){
//         if(nums[i] >= x){
//             return i;
//         }
//     }
//     return n;
// }