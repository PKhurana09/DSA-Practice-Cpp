// Given an integer n, write a function to print all numbers from 1 to n (inclusive) using recursion.
// You must not use any loops such as for, while, or do-while.
// The function should print each number on a separate line, in increasing order from 1 to n.


#include<iostream>

void printNumbers(int n);

int main(void){
    printNumbers(5);
    return EXIT_SUCCESS;
}

void printNumbers(int n){
    if(n == 0) return;
    printNumbers(n - 1);

    std::cout << n  << std::endl;
}