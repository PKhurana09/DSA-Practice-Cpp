// Insertion Sort

#include <iostream>

#define NUM 6

void insertionSort(int arr[], int n);

int main() {
    int retVal[NUM] = {13, 46, 24, 52, 20, 9};

    std::cout << "Before sorting:" << std::endl;
    for(int i = 0; i < NUM; ++i){
        std::cout << retVal[i] << " ";
    }

    std::cout << std::endl;

    insertionSort(retVal, NUM);

    std::cout << "After sorting:" << std::endl;
    for(int i = 0; i < NUM; ++i){
        std::cout << retVal[i] << " ";
    }

    return 0;
}

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; ++i){
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}
