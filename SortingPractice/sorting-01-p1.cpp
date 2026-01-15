// Selection Sort

// First, we will select the range of the unsorted array using a loop (say i) that indicates the starting index of the range. The loop will run forward from 0 to n-1. The value i = 0 means the range is from 0 to n-1, and similarly, i = 1 means the range is from 1 to n-1, and so on. (Initially, the range will be the whole array starting from the first index.)
// Now, in each iteration, we will select the minimum element from the range of the unsorted array using an inner loop.
// After that, we will swap the minimum element with the first element of the selected range(in step 1).
// Finally, after each iteration, we will find that the array is sorted up to the first index of the range.

#include <iostream>
#include <vector>

using namespace std;

#define NUM_LENGTH 5

vector<int> selectionSort(vector<int> &nums);

int main(void)
{
    vector<int> sortArray = {7, 5, 9, 11, 2, 8};
    int length = sortArray.size();
    cout << "Array before sorting is below " << endl;
    for (int i = 0; i != length; ++i)
    {
        cout << sortArray[i] << " ";
    }

    selectionSort(sortArray);

    cout << endl;

    cout << "Array after sorting is below " << endl;
    for (int i = 0; i != length; ++i)
    {
        cout << sortArray[i] << " ";
    }

    return EXIT_SUCCESS;
}

vector<int> selectionSort(vector<int> &nums)
{
    int vectorLength = nums.size();
    for (int i = 0; i < vectorLength; ++i)
    {
        int smallest = i;
        for (int j = i + 1; j < vectorLength; ++j)
        {
            if (nums[smallest] > nums[j])
            {
                smallest = j;
            }
        }
        int temp = nums[smallest];
        nums[smallest] = nums[i];
        nums[i] = temp;
    }
    return nums;
}
