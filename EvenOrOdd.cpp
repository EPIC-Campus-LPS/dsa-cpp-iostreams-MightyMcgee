#include <iostream>
/*Program to determine whether a number is even or odd*/
int main(){
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    if ( a % 2 == 0) /*finds the ramainder of a*/
        std::cout << a << " is even";
    else
        std::cout << a << " is odd";
}