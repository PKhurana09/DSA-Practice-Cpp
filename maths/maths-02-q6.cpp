// You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.
// A number which completely divides another number is called it's divisor.


#include<iostream>
#include <vector>

std::vector<int> divisors(int n);

int main(void){
    std::vector<int> ret = divisors(8);
    int size = ret.size();

    for(int i = 0; i != size; ++i){
        std::cout << ret.at(i) << ", ";
    }
    return EXIT_SUCCESS;
}

std::vector<int> divisors(int n){
    std::vector<int> retVal;
    for(int i = 1; i <= n; ++i){
        if(n % i == 0){
            retVal.push_back(i);
        }
    }
    return retVal;
}