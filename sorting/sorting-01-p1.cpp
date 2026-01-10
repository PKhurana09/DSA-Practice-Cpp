//  How to do selection sort

#include<iostream>

#define NUM 5

void selectionShuffle(int arr[], int n);

int main(void){
    int retVal[NUM] = {7, 5, 9, 2, 8};

    std::cout << "Before Shuffle" << std::endl;
    
    for(int i = 0; i != NUM; ++i){
        std::cout << retVal[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "After Shuffle" << std::endl;

    selectionShuffle(retVal, NUM);

    for(int i = 0; i != NUM; ++i){
        std::cout << retVal[i] << " ";
    }

    return EXIT_SUCCESS;
}

void selectionShuffle(int arr[], int n){
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;

        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // swap once per pass
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}