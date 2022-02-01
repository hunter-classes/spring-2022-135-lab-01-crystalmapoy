//Crystal Mapoy
//Tong Yi & Mike Zamansky
//CS135
//Jan 31 
#include <iostream>
//using namespace std

int main () {

    int num1, num2; //declaration
    std::cout << "Enter the first number: "; //asks user input
    std::cin >> num1; //stores input in variable
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    if (num1 > num2) { //if statement compares
        std::cout << "The smaller of the two is: " << num2;
    }
    else if (num2 > num1) {
        std::cout << "The smaller of the two is: " << num1;
    }

    return 0;
}