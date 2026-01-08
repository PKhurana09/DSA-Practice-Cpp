// Given marks of a student, print on the screen:

// Grade A if marks >= 90
// Grade B if marks >= 70
// Grade C if marks >= 50
// Grade D if marks >= 35
// Fail, otherwise.


// For printing use:-

// for C++ : cout << variable_name;

#include<iostream>

void studentGrade(int marks);

int main(void){
    studentGrade(98);
    studentGrade(90);
    studentGrade(75);
    studentGrade(14);
    return EXIT_SUCCESS;
}

void studentGrade(int marks){
    if(marks >= 90){
        std::cout << "Grade A" << std::endl;
    }else if(marks >= 70){
        std::cout << "Grade B" << std::endl;
    }else if(marks >= 50){
        std::cout << "Grade C" << std::endl;
    }else if(marks >= 35){
        std::cout << "Grade D" << std::endl;
    }else{
        std::cout << "Fail" << std::endl;
    }
}