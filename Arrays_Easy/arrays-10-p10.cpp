// Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.
// The union of two arrays is an array where all values are distinct and are present in either the first array, the second array, or both.

#include <iostream>
#include <vector>

using namespace std;

vector<int> unionArray(vector<int> &nums1, vector<int> &nums2);

int main(void)
{

    vector<int> retVal1 = {1, 2, 3, 4, 5};
    vector<int> retVal2 = {1, 2, 7};

    vector<int> tempArray = unionArray(retVal1, retVal2);

    int n = tempArray.size();

    cout << "Below is the union of 2 given arrays: " << endl;

    for (int i = 0; i != n; ++i)
    {
        cout << tempArray[i] << " ";
    }

    cout << endl;

    return EXIT_SUCCESS;
}

vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
{
    int i = 0, j = 0;
    int n = nums1.size(), m = nums2.size();
    vector<int> result;

    while (i < n && j < m)
    {
        if (nums1[i] <= nums2[j])
        {
            if (result.empty() || result.back() != nums1[i])
                result.push_back(nums1[i]);
            i++;
        }
        else
        {
            if (result.empty() || result.back() != nums2[j])
                result.push_back(nums2[j]);
            j++;
        }
    }

    while (i < n)
    {
        if (result.empty() || result.back() != nums1[i])
            result.push_back(nums1[i]);
        i++;
    }

    while (j < m)
    {
        if (result.empty() || result.back() != nums2[j])
            result.push_back(nums2[j]);
        j++;
    }

    return result;
}
