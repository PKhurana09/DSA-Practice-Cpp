// You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.

// A palindrome number is a number which reads the same both left to right and right to left.


#include<iostream>

bool isPalindrome(int n);

int main(void){

    std::cout << isPalindrome(101);

    return EXIT_SUCCESS;
}


bool isPalindrome(int n){

    if(n < 0 ){
        return false;
    }

    int num = n;
    int rev = 0;
    while( n != 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    return rev == num;
}