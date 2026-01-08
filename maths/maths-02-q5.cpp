// You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.
// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.


#include<iostream>
#include<cmath>

bool isArmstrong(int n);

int main(void){
    std::cout << isArmstrong(153);
    return EXIT_SUCCESS;
}

bool isArmstrong(int n){
    int counter = 0;
    int arm = 0;
    int num = n;
    int check = n;
    while(n != 0){
        ++counter;
        n /= 10;
    }

    while(num != 0){
        int digit = num % 10;
        arm = arm + std::ceil(std::pow(digit, counter));
        num /= 10;
    }

    if(check == arm){
        std::cout << check << std::endl;
        std::cout << arm << std::endl;
        std::cout << "True" << std::endl;
        return true;
    }else{
        std::cout << check << std::endl;
        std::cout << arm << std::endl;
        std::cout << "False" << std::endl;
        return false;
    }
}

