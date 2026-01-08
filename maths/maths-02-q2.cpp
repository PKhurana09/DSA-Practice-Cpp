// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.

#include<iostream>

int reverseNumber(int n);

int main(void){
    std::cout << reverseNumber(1534236469);
    return EXIT_SUCCESS;
}

int reverseNumber(int n){
    int rev = 0;

    while(n != 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    return rev;
}