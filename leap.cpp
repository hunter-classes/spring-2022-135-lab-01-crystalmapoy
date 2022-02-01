//Crystal Mapoy
//Tong Yi & Mike Zamansky
//CS135
//Jan 31 
#include <iostream>
//using namespace std

int main () {
    
    int year;//declare variable
    std::cout << "Enter year: "; //ask input
    std::cin >> year; //store variable

    //following pseudocode 
    if (year % 4 != 0) { 
        std::cout << "common year";
    }
    else if (year % 100 != 0) {
        std::cout << "leap year";
    }
    else if (year % 400 != 0) {
        std::cout << "common year";
    }
    else {
        std::cout << "leap year";
    }

    return 0;
}