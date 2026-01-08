// You are given an integer n. You need to return the number of digits in the number.

// The number will have no leading zeroes, except when the number is 0 itself.

#include<iostream>

int countDigit(int n);

int main(void){
    std::cout << countDigit(148);
    return EXIT_SUCCESS;
}

int countDigit(int n){
    int counter = 0;
    if(n == 0){
        return counter;
    }else{
        ++counter;
        while(n/10 != 0){
            ++counter;
            n/=10;
        }
        return counter;
    }
}