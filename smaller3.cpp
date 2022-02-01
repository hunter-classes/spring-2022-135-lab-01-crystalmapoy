//Crystal Mapoy
//Tong Yi & Mike Zamansky
//CS135
//Jan 31 
#include <iostream>
//using namespace std 
int main () {

    int num1, num2, num3;//declaration
    std::cout << "Enter the first number: "; //ask input
    std::cin >> num1; //store input in variable
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;

    if (num1 > num2 && num3 > num2) { //comparing all 3 num
        std::cout << "The smaller of the three is: " << num2;
    }
    else if (num2 > num1 && num3 > num1) {
        std::cout << "The smaller of the three is: " << num1;
    }
    else {
        std::cout << "The smaller of the three is: " << num3;
    }

    return 0;
}