// Given an array nums of size n which may contain duplicate elements.
// Rreturn a list of pairs where each pair contains a unique element from the array and its frequency in the array.
// You may return the result in any order, but each element must appear exactly once in the output.


#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> countFrequencies(vector<int>& nums);

int main(void){

    return EXIT_SUCCESS;
}


// vector<vector<int>> countFrequencies(vector<int>& nums){
//     vector<vector<int>> retVal;

//     for(int i = 0; i != nums.size(); ++i){
//         retVal.at(nums.at(i)) += 1;
//     }
// }
