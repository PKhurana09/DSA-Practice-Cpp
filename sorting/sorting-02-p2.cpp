//  Using Bubble sort

#include<iostream>

#define NUM 6

void sortArray(int arr[], int n);

int main(void){
    int retVal[NUM] = {13, 46, 24, 52, 20, 9};

    std::cout << "retVal before sorting" << std::endl;

    for(int i = 0; i != NUM; ++i){
        std::cout << retVal[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "retVal after sorting" << std::endl;

    sortArray(retVal, NUM);

    for(int i = 0; i != NUM; ++i){
        std::cout << retVal[i] << " ";
    }

    return EXIT_SUCCESS;
}

void sortArray(int arr[], int n){
    for(int i = n - 1; i > 0; --i){
        for(int j = 0; j <= i - 1 ; j ++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp; 
            }
        }
    }
}