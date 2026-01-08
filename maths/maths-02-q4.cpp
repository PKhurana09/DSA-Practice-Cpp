// You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.
// The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.


#include<iostream>

int GCD(int n1,int n2);

int main(void){
    std::cout << GCD(14, 21);
    return EXIT_SUCCESS;
}

int GCD(int n1,int n2){
    int gcd = 0;
    int limit = (n1 < n2) ? n1 : n2;

    for(int i = 1; i <= limit; ++i){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    return gcd;
}