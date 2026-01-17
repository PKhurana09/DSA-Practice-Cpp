#include<iostream>

using namespace std;

void printNumbers(int N);

int main(void){
    printNumbers(10);
    return EXIT_SUCCESS;
}

void printNumbers(int N){
    if ( N == 1 ){
        cout << "1\n";
        return;
    }

    cout << N << " ";
    printNumbers(N - 1);
}