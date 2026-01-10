// Given an array nums of n integers, find the most frequent element in it i.e., the element that occurs the maximum number of times. If there are multiple elements that appear a maximum number of times, find the smallest of them.
// Please note that this section might seem a bit difficult without prior knowledge on what hashing is, we will soon try to add basics concepts for your ease! If you know the concepts already please go ahead to give a shot to the problem. Cheers!


#include<iostream>
#include<map>
#include<vector>

using namespace std;

int mostFrequentElement(vector<int>& nums);

int main(void){
    vector<int> check = {1, 2, 2, 3, 3, 3};

    std::cout << mostFrequentElement(check);

    return EXIT_SUCCESS;
}

int mostFrequentElement(vector<int>& nums){
    map<int, int> freq;

    // Count the frequency
    for(int num : nums){
        freq[num]++;
    }

    vector<vector<int>> retVal;
    
    for(auto& it : freq){
        retVal.push_back({it.first, it.second});
    }

    return retVal.at(0).at(0);
}