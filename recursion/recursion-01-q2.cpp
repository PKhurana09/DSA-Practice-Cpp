// Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.



#include<iostream>

int NnumbersSum(int N);

int main(void){
    std::cout << NnumbersSum(5);
    return EXIT_SUCCESS;
}

int NnumbersSum(int N){
    int sum = 0;
    if (N == 0) return sum;

    sum = sum + NnumbersSum( N - 1);
    return sum;
}
