//  Q1 Complete the function printNumber which takes an integer input from the user and prints it on the screen.

#include<iostream>

void printNumber();

int main(void){
    printNumber();
    return EXIT_SUCCESS;
}

void printNumber(){
    int x;
    std::cout << "Please enter the integer: " << std::endl;
    std::cin >> x;
    std::cout << x;
}