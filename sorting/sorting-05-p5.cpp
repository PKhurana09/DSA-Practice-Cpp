//  Recursive Bubble sort

#include <iostream>

#define NUM 6

void sort(int arr[], int n);

int main(void)
{
    int retVal[NUM] = {13, 46, 24, 52, 20, 9};

    std::cout << "retVal before sorting" << std::endl;

    for (int i = 0; i != NUM; ++i)
    {
        std::cout << retVal[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "retVal after sorting" << std::endl;

    sort(retVal, NUM);

    for (int i = 0; i != NUM; ++i)
    {
        std::cout << retVal[i] << " ";
    }

    return EXIT_SUCCESS;
}

void sort(int arr[], int n)
{
    // Base case
    if (n == 1)
        return;

    for (int j = 0; j < n - 1; ++j)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    sort(arr, n - 1);
}