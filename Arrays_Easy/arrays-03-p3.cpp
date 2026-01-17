//  Remove dupliactes in a sorted array
// Given an integer array nums sorted in non-decreasing order, remove all duplicates in-place so that each unique element appears only once.
// Return the number of unique elements in the array.
// If the number of unique elements be k, then,
// Change the array nums such that the first k elements of nums contain the unique values in the order that they were present originally.
// The remaining elements, as well as the size of the array does not matter in terms of correctness.
// The driver code will assess correctness by printing and checking only the first k elements of the modified array.
// An array sorted in non-decreasing order is an array where every element to the right of an element is either equal to or greater in value than that element.

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &nums);

int main(void)
{
    cout << "Below is the required array" << endl;

    vector<int> numArray = {0, 0, 3, 5, 6};

    int numLength = numArray.size();
    for (int i = 0; i != numLength; ++i)
    {
        cout << numArray[i] << " ";
    }

    cout << endl;

    cout << "The given array has " << removeDuplicates(numArray) << " distinct elements" << endl;

    cout << "Array after removing duplicates is below" << endl;

    for (int i = 0; i != numLength; ++i)
    {
        cout << numArray[i] << " ";
    }

    cout << endl;

    return EXIT_SUCCESS;
}

int removeDuplicates(vector<int> &nums)
{
    int numLength = nums.size();
    int retNum2 = nums[0];
    int pointer = 1;

    if (numLength > 0)
    {
        for (int i = 1; i != numLength; ++i)
        {
            if (retNum2 != nums[i])
            {
                retNum2 = nums[i];
                int temp = nums[pointer];
                nums[pointer] = nums[i];
                nums[i] = temp;
                pointer++;
            }
        }

        return pointer;
    }else{
        return 0;
    }
}