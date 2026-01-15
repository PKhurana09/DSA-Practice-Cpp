// In each iteration, select an element from the unsorted part of the array using an outer loop.
// Place this selected element in its correct position within the sorted part of the array.
// Use an inner loop to shift the remaining elements, if necessary, to accommodate the selected element. This involves shifting elements by one position until the selected element can be placed in the correct position.
// Continue this process until the entire array is sorted.

#include<iostream>
#include<vector>

using namespace std;

vector<int> insertionSort(vector<int>& nums);

int main(void){
    vector<int> sortArray = {13, 46, 24, 52, 20, 9};
    int length = sortArray.size();

    cout << "Array before sorting is below" << endl;
    for(int i = 0; i != length; ++i){
        cout << sortArray[i] << " ";
    }

    cout << endl;
    insertionSort(sortArray);

    cout << "Array after sorting is below" << endl;
    for(int i = 0; i != length; ++i){
        cout << sortArray[i] << " ";
    }
    return EXIT_SUCCESS;
}


vector<int> insertionSort(vector<int>& nums){
    int n = nums.size();

    for (int i = 1; i < n; ++i)
    {
        int key = nums[i];      // store the element
        int j = i - 1;

        // shift elements greater than key to the right
        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j--;
        }

        // insert key at correct position
        nums[j + 1] = key;
    }
    return nums;
}