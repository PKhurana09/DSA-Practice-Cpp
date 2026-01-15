// MERGE SORT


// Merge Sort is a classic divide and conquer algorithm. The core idea is based on breaking down a big problem into smaller, manageable sub-problems i.e. sorting smaller arrays and then merging those solutions to get the final sorted result.

// It is much easier to merge two sorted arrays than to sort a large unsorted one. Therefore, instead of trying to sort the entire array at once, Merge Sort breaks it into halves repeatedly until we reach arrays of size 1 (which are trivially sorted), and then merges them back in sorted order. This makes the algorithm efficient and predictable, especially for large datasets.
// If the array has only one or zero elements, it is already sorted, so we return it as is.
// Else, we divide the array into two halves by finding the middle index.
// We then apply the merge sort algorithm recursively on each of the two halves to sort them individually.
// Once we have two sorted halves, we need to merge them into a single sorted array.
// To merge, we compare elements from both halves one by one and place the smaller element into a new array, continuing this until all elements from both halves are used.
// This process is repeated at every level of recursion, and finally, we get one fully sorted array after all merges are complete.

#include<iostream>
#include<vector>

using namespace std;

// vector<int> mergeSort(vector<int>& nums);
void merge(int arr[], int start, int mid, int end);
void mergeSort(int arr[], int start, int end);

int main(void){

    return EXIT_SUCCESS;
}

// vector<int> mergeSort(vector<int>& nums){
//     int vectorLength = nums.size();
//     if(vectorLength == 0 || vectorLength == 1){
//         return nums;
//     }else{
//         while(vectorLength != 1){

//         }
//     }
// }


void merge(int arr[], int start, int mid, int end){
    vector<int> temp;
    int i = start;
    int j = mid+1;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++
    }

    while(j <= end){
        temp.push_back(arr[j]);
        j++
    }

    for(int idx = 0; idx < temp.size(); ++idx){
        arr[idx+start] = temp[idx];
    }
}

void mergeSort(int arr[], int start, int end){
    if(start < end){
        int mid = start + (end-start)/2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }

}