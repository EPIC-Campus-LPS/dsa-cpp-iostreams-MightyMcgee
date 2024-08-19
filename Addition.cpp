#include <iostream>
/*Program that adds two numbers*/
int main(){
    int a;
    int b;
    std::cout << "Enter a number: ";
    std::cin >> a; /*saves an entered number to a*/
    std::cout << "Enter a second number: ";
    std::cin >> b;
    std::cout << "The sum of the numbers is " << a+b; /*adds a and b*/
}