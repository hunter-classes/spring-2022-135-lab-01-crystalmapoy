//Crystal Mapoy
//Tong Yi & Mike Zamansky
//CS135
//Jan 31 
#include <iostream>
//using namespace std

int main() {
    
    int year, month, common, leap; //declare all variables
    std::cout << "Enter year: ";//input
    std::cin >> year;//store
    std::cout << "Enter month: ";
    std::cin >> month;

    //check if leap year from leap.cpp
    if (year % 4 != 0) {
        year = common;
    }
    else if (year % 100 != 0) {
        year = leap;
    }
    else if (year % 400 != 0) {
        year = common;
    }
    else {
        year = leap;
    }

    //checks how many days per month, including leap or common year
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        std::cout << "31 days";
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        std::cout << "30 days";
    }
    else if (month == 2 && year == common) {
        std::cout << "28 days";
    }
    else if (month == 2 && year == leap) {
        std::cout << "29 days";
    }

    return 0;
}