// Given an array of integers nums and an integer target, find the smallest index (0 based indexing) where the target appears in the array. If the target is not found in the array, return -1.

#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> &nums, int target);

int main(void)
{
    vector<int> retVal = {2, 2, 4, 5, 5};
    int size = retVal.size();
    cout << "Array before is below: " << endl;

    for (int i = 0; i != size; ++i)
    {
        cout << retVal[i] << " ";
    }

    cout << endl;

    cout << "The target value 3 appears at: " << linearSearch(retVal, 3) << endl; 

    return EXIT_SUCCESS;
}

int linearSearch(vector<int> &nums, int target)
{
    int n = nums.size();
    int retVal = -1;

    for (int i = 0; i != n; ++i)
    {
        if (nums[i] == target)
        {
            retVal = i;
            break;
        }
    }
    return retVal;
}