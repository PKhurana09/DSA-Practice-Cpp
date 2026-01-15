// BUBBLE SORT

// Select the range of the unsorted array: Use an outer loop (i) that runs backward from n-1 to 0 (where n is the size of the array). The value i = n-1 means the range is from 0 to n-1, i = n-2 means the range is from 0 to n-2, and so on.
// Push the maximum element to the end of the selected range: Use an inner loop (j) that runs from 0 to i-1. Compare adjacent elements and swap them if arr[j] > arr[j+1]. Repeating this process ensures the maximum element in the current range moves to index i.
// Progressively sort the array: After each outer loop iteration, the last part of the array becomes sorted. For example:
// After the first iteration, the element at the last index is sorted.
// After the second iteration, the last two elements are sorted.
// This continues until the entire array is sorted.
// Complete sorting: After n-1 iterations, the whole array will be sorted.
// Note: After each iteration, the sorted portion grows from the end, so the last index of the unsorted range decreases by 1 (controlled by i). The inner loop (j) ensures the maximum element in the range [0…i] is placed at index i.


#include<iostream>
#include<vector>

using namespace std;

vector<int> bubbleSort(vector<int>& nums);

int main(void){
    vector<int> sortArray = {13, 42, 24, 52, 20, 9};
    int length = sortArray.size();

    cout << "Array before sorting is below" << endl;
    for(int i = 0; i != length; ++i){
        cout << sortArray[i] << " ";
    }

    cout << endl;
    cout << "Array after sorting is below" << endl;

    bubbleSort(sortArray);

    for(int i = 0; i != length; ++i){
        cout << sortArray[i] << " ";
    }

    return EXIT_SUCCESS;
}


vector<int> bubbleSort(vector<int>& nums){
    int vectorLength = nums.size();

    for(int i = (vectorLength - 1); i >= 0; --i){
        bool swapped = false;
        for(int j = 0; j < i; ++j){
            if(nums[j] > nums[j + 1]){
                int retVal = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = retVal;
                swapped = true;
            }
        }

        if(!swapped){
            break;
        }
    }
    return nums;
}