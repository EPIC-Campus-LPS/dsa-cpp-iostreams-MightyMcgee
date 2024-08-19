#include <iostream>
/*Program that converts temperature in celsius to farenheit*/
int main(){
    int x;
    std::cout << "Enter a temperature in celsius:";
    std::cin >> x;
    std::cout << "Farenheit:" << x*9/5+32;
}